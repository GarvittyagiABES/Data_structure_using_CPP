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

bool isequal(node *head1, node *head2)
{
    node *ptr1 = head1;
    node *ptr2 = head2;

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->val == ptr2->val)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        else
        {
            return false;
        }
    }
    if(ptr1==NULL&&ptr2==NULL)
    {

    return true;
    }
    else{
        return false;
    }
}
int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    insertAtTail(head1, 10);
    // display(head1);
    insertAtTail(head1, 20);
    insertAtTail(head1, 30);
    insertAtTail(head1, 40);
    insertAtTail(head1, 50);
    // display(head1);
    // cout << "here" << endl;
    insertAtTail(head2, 10);
    insertAtTail(head2, 20);
    insertAtTail(head2, 30);
    insertAtTail(head2, 40);
    insertAtTail(head2, 50);
    insertAtTail(head2, 60);
    // display(head2);
    // cout << "here2" << endl;
    if (isequal(head1, head2))
    {
        cout << "Linked list are equal";
    }
    else
    {
        cout << "Linked list are not equal";
    }

    return 0;
}