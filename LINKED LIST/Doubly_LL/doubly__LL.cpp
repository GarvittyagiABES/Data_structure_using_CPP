#include <bits/stdc++.h>
using namespace std;
class node
{

public:
    int val;
    node *prev;
    node *next;
    node(int data)
    {
        val = data;
        prev = NULL;
        next = NULL;
    }
};
class Doubly_LL
{
public:
    node *head;
    node *tail;
    Doubly_LL()
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
        // cout<<"NULL<-";
        while (ptr != NULL)
        {
            cout << ptr->val << "<->";
            ptr = ptr->next;
        }
        cout << "NULL" << endl;
    }
    void InsertAtk(int k, int data)
    {
        node *ptr = head;
        int count = 1;

        while (count < (k - 1))
        {
            ptr = ptr->next;
            count++;
        }
        node *new_node = new node(data);
        new_node->next = ptr->next;
        new_node->prev = ptr;
        new_node->next->prev = new_node;
        ptr->next = new_node;
    }
    void deletefromfront()
    {
        if (head == NULL)
        {
            cout << "LL is empty " << endl;
            return;
        }
        node *ptr = head;
        head = ptr->next;
        head->prev = NULL;
        free(ptr);
        return;
    }
    void deleteFromLast()
    {
        if (head == NULL)
        {
            cout << "LL is empty " << endl;
            return;
        }
        node *ptr = tail;
        tail = ptr->prev;
        ptr->prev->next = NULL;

        free(ptr);
        return;
    }
    void deleteATK(int k)
    {
        if (head == NULL)
        {
            cout << "Empty LL" << endl;
            return;
        }
        node *ptr = head;
        int count = 1;
        while (count < (k))
        {

            ptr = ptr->next;
            count++;
        }
        if (ptr == NULL)
        {
            cout << "Invalid position";
            return;
        }
        ptr->prev->next = ptr->next;
        ptr->next->prev = ptr->prev;
        free(ptr);
        return;
    }
    void reverse()
    {
        if (head->next == NULL)
        {
            cout << "Only one node present\n";
            return;
        }
        node *curr_ptr = head;
       while(curr_ptr)
       {
       node*next_ptr=curr_ptr->next;
         curr_ptr->next=curr_ptr->prev;
         curr_ptr->prev=next_ptr;
        curr_ptr=next_ptr;
       }
       node*new_head=tail;
       tail=head;
       head=new_head; 
       return;
    }
};

int main()
{
    node *new_node = new node(10);
    Doubly_LL dll;
    //   dll.head=new_node;
    //   dll.tail=new_node;
    //   cout<<dll.head->val;
    // dll.deletefromfront();
    dll.insertAtStart(1);
    dll.insertAtStart(2);
    dll.insertAtStart(3);
    dll.insertAtStart(4);
    dll.insertAtStart(5);
    dll.insertAtLast(6);
    dll.insertAtLast(8);
    dll.insertAtLast(9);
    dll.insertAtLast(10);
    dll.insertAtLast(11);
    dll.display();
    // dll.InsertAtk(3, 33);
    // dll.display();
    // dll.deletefromfront();
    // dll.display();
    // cout << "deleting from last" << endl;
    // dll.deletefromfront();
    // dll.display();
    // dll.deleteATK(4);
    // dll.display();
    dll.reverse();
    dll.display();
    return 0;
}