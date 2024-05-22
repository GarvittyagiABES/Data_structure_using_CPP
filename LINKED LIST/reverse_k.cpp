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
node * reverse_k_node(node *&head,int k)
{
    int reverse=0;
    node *current=head;
    node *prev=NULL;
 while(current&&reverse<k)
 {
    node * next=current ->next;
    current->next=prev;
    prev=current;
    current=next; 
    reverse++;
 }
 if(current)
 {

  node *new_head=reverse_k_node(current,k);
  head->next=new_head;
 }
 return prev;
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
    ll.display();
    int k; cout<<"Enter k: ";
    cin>>k;
    ll.head=reverse_k_node(ll.head,k);
    ll.display();
    return 0;
}