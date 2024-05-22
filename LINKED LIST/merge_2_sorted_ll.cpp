#include <iostream>
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

int main()
{
    LinkedList ll;
    LinkedList ll2;
    ll.insert(10);
    ll.insert(20);
    ll.insert(30);
    ll.insert(42);
    ll.insert(51);
    ll.insert(66);
    ll.insert(78);
    ll.insert(82);
    ll.insert(94);
    ll.insert(100);
    ll.display();
     ll2.insert(9);
     ll2.insert(18);
     ll2.insert(27);
     ll2.insert(36);
     ll2.insert(45);
     ll2.insert(54);
     ll2.insert(63);
     ll2.insert(72);
    ll2.display();
     ll.head=merge_sorted_ll(ll.head,ll2.head);
     ll.display();
    return 0;
}