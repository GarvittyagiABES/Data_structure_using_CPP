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


node *reorder_LL(node *&head)
{
    if (head == NULL || head->next == NULL)
        return head;

    // Find the middle node
    node *slow = head;
    node *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse the second half of the linked list
    node *prev = NULL;
    node *curr = slow->next;
    while (curr)
    {
        node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    slow->next = NULL; // Disconnect the two halves

    // Merge the two halves by alternating nodes
    node *h1 = head;
    node *h2 = prev;
    while (h1 && h2)
    {
        node *next_h1 = h1->next;
        node *next_h2 = h2->next;
        h1->next = h2;
        h2->next = next_h1;
        h1 = next_h1;
        h2 = next_h2;
    }
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
    ll.insert(7);
    ll.insert(8);
    ll.insert(9);
    ll.insert(10);

    ll.display();
    ll.head=reorder_LL(ll.head);
    cout << "After Reorder\n";
    ll.display();

    return 0;
}