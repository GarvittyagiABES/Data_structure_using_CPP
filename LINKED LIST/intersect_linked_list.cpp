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
void insertAtTail(node *&head, int data)
{
    if (head == NULL)
    {
        node *new_node = new node(data);
        head = new_node;
        return;
    }
    node *ptr = head;
    node *new_node = new node(data);
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new_node;
}
void display(node *head)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->val << "->";
        ptr = ptr->next;
    }
    cout << "NULL" << endl;
}
int get_length(node *head)
{
    int length = 0;
    while (head != NULL)
    {
        head = head->next;
        length++;
    }
    return length;
}
node *move_ptr(node *&head, int k)
{
    node *ptr = head;
    while (k--)
    {
        ptr = ptr->next;
    }
    return ptr;
}
int get_intersection(node *head1, node *head2)
{
    int l1 = get_length(head1);
    int l2 = get_length(head2);
    cout << l1 << " and " << l2 << endl;
    if (l1 > l2)
    {
        head1 = move_ptr(head1, l1 - l2);
        cout << "head1 is at " << head1->val << endl;
    }
    else
    {
        head2 = move_ptr(head2, l2 - l1);
        cout << "head2 is at " << head2->val << endl;
    }
    while (head1)
    {
        if (head1 == head2)
        {
            return head1->val;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return -1;
}
int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 3);
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);
    display(head1);
    insertAtTail(head2, 6);
    insertAtTail(head2, 7);
    head2->next->next = head1->next->next->next;
    display(head2);
    cout << get_intersection(head1, head2);

    return 0;
}
