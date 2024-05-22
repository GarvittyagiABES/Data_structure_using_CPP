#include <iostream>
#include<vector>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int data)
    {
        val = data;
        next = NULL;
    }
};
class LinkedList
{
public:
    node *head;
    LinkedList()
    {
        head = NULL;
    }
    void insert(int data)
    {
        node *new_node = new node(data);

        if (head == NULL)
        {
            head = new_node;
            return;
        }
        node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new_node;
    }
    void display()
    {
        node *ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->val << "->";
            ptr = ptr->next;
        }
        cout << "NULL" << endl;
    }
};
node * merge_sorted_ll(node *head1,node *head2)
{
 node * ptr_1=head1;
 node * ptr_2=head2;
 node *dummy_head=new node(-1);
 node *ptr_3=dummy_head;
 while(ptr_1&&ptr_2)
 {
    if(ptr_1->val<ptr_2->val)
    {
        ptr_3->next=ptr_1;
        ptr_1=ptr_1->next;
    }
    else
    {
        ptr_3->next=ptr_2;
        ptr_2=ptr_2->next;
    }
    ptr_3=ptr_3->next;
 }
   if(ptr_1)
   {
    ptr_3->next=ptr_1;
   }
   if(ptr_2)
   {
    ptr_3->next=ptr_2;
   }
   return dummy_head->next;
}
node* merge_k_ll(vector<node*> list)
{
    if(list.size()==0)
    {
        return NULL;
    }
   while(list.size()>1)
   {
    node * mergedHead=merge_sorted_ll(list[0],list[1]);
    list.push_back(mergedHead);
    list.erase(list.begin());
    list.erase(list.begin());


   }
   return list[0];

}
int main()
{
    LinkedList ll;
    ll.insert(1);
    ll.insert(7);
    ll.insert(8);
    ll.display();
    LinkedList ll2;
    ll2.insert(2);
    ll2.insert(4);
    ll2.insert(5);
    ll2.display();
    LinkedList ll3;
    ll3.insert(3);
    ll3.insert(6);
    ll3.display();
    vector<node*> list;
    list.push_back(ll.head);
    list.push_back(ll2.head);
    list.push_back(ll3.head);
    LinkedList merged_ll;

    merged_ll.head=merge_k_ll(list);
    merged_ll.display();
    return 0;
}