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
void rotate_k_times(node*&head,int k)
{
    node*ptr=head;
    node*tail;
    int len=0;
    while(ptr)
    {   
        tail=ptr;
        len++;
        ptr=ptr->next;
    }
    tail->next=head;
    ptr=head;
    k=k%len;
    int n=len-k;
    while(n--)
    {
        ptr=ptr->next;
    }
    head=ptr->next;
    ptr->next=NULL;

}
int main()
{
   LinkedList ll;
    ll.insert(1);
    ll.insert(2);
    ll.insert(3);
    ll.insert(4);
    ll.insert(5);
    ll.insert(6);
    // ll.insert(7);
    // ll.insert(8);
    // ll.insert(9);
    // ll.insert(10);
    
    ll.display();
    int k=5;
    rotate_k_times(ll.head,k);
    ll.display();
      
    return 0;
}