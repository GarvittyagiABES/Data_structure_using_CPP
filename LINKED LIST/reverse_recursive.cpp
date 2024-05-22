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
node *reverse_recursive(node *&head)
{ // base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *new_head = reverse_recursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return new_head;
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
    // ll.display();
    ll.head = reverse_recursive(ll.head);
    ll.display();
    return 0;
}