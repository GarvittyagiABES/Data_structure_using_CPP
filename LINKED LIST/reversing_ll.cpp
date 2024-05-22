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
node* Reversing_ll(node *&head)
{
    node *prev = NULL;
    node *current = head;
    node *next;
    // cout<<"in reversing ll"<<endl;
    while (current)
    {
        next = current->next;
        current->next = prev;
       
        prev = current;
        current =next ;
    }
    head = prev;
    return head;
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
   ll.head= Reversing_ll(ll.head);
    ll.display();

    return 0;
}