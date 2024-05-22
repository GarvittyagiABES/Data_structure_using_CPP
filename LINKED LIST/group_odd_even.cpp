#include <iostream>
#include <vector>
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
void group_odd_even(node *&head)
{
    if(!head)
    {
        return;
    }
    node *even_head = head->next;

    node *evenptr = even_head;

    node *odd_head = head;

    node *odd_ptr = head;
    while (evenptr && evenptr->next)
    {
        odd_ptr->next = odd_ptr->next->next;
        evenptr->next = evenptr->next->next;
        odd_ptr=odd_ptr->next;
        evenptr=evenptr->next;
    }
    odd_ptr->next = even_head;
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
    group_odd_even(ll.head);
    cout<<"After Grouping\n";
    ll.display();

    return 0;
}