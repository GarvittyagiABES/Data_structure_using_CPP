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
bool Is_cycle(node*head)
{
    node*slow=head;
    node*fast=head;
    if(head==NULL)
    {
        return false;
    }
    while(fast&&fast->next)
    { 
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast)
        {
            return true;
        }
    }
    return false;
}
void removeCycle(node*&head)
{
    
    node*slow=head;
    node*fast=head;
    if(head==NULL)
    {
        return;
    }
    while(fast&&fast->next)
    { 
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast)
        {
             break;
        }
    }
    fast=head;
    while(slow->next!=fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;

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
    ll.insert(7);
    ll.insert(8);
    ll.insert(9);
    ll.insert(10);
    ll.display();
    ll.head->next->next->next->next->next->next->next->next->next=ll.head->next->next;
    
    cout<<Is_cycle(ll.head);
    cout<<endl;
    removeCycle(ll.head);
    ll.display();
       
     
    
    return 0;
}