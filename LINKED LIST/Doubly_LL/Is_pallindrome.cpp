#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node*next;
    node*prev;
    node(int data)
    {
        val=data;
        next=NULL;
        prev=NULL;
    }
};
class doubly_LL{
    public:
    node *head;
    node *tail;
    doubly_LL()
    {
        head = NULL;
        tail = NULL;
    }
    void insertAtStart(int data)
    {
        node *new_node = new node(data);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
        return;
    }
    void insertAtLast(int data)
    {
        node *new_node = new node(data);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = tail->next;
        return;
    }
    void display()
    {
        node *ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->val << "<->";
            ptr = ptr->next;
        }
        cout << "NULL" << endl;
    }

};
bool Is_pallindrome(node *head,node*tail)
{
    if(head==NULL)
    {
        cout<<"Your LL is empty"<<endl;
        return 0;
    }
    while(head!=tail&&head->prev!=tail)
    {    
        if(head->val!=tail->val)
    {
        return false;
    }
        head=head->next;
        tail=tail->prev;
    }
    return true;
}
int main()
{
    doubly_LL dll;
    dll.insertAtLast(1);
    dll.insertAtLast(2);
    dll.insertAtLast(3);
    dll.insertAtLast(3);
    dll.insertAtLast(2);
    dll.insertAtLast(1);
    dll.display();
    if(Is_pallindrome(dll.head,dll.tail))
    {
        cout<<"Your LL is pallindrome\n";
    }
    else{
        cout<<"Your LL is  not pallindrome\n";

    }
    return 0;
}
