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
void display(node *head)
{
    if (head == NULL)
    {
        cout << "List is empty";
        return;
    }
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->val << "->";
        ptr = ptr->next;
    }
    cout << "NULL";
}
void insertAtFront(node *&head, int data)
{
    if (head == NULL)
    {
        node *n = new node(data);
        head = n;
        return;
    }
    node *new_node = new node(data);
    new_node->next = head;
    head = new_node;
}
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
void insertAtPos(node *&head, int pos, int data)
{
    if (pos == 0)
    {
        insertAtFront(head, data);
        return;
    }
    int curr_pos = 1;
    node *ptr = head;
    node *new_node = new node(data);
    while (pos > curr_pos)
    {
        ptr = ptr->next;
        curr_pos++;
    }
    new_node->next = ptr->next;
    ptr->next = new_node;
}
void deletionAtFront(node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty";
        return;
    }
    node *ptr = head;
    head = ptr->next;
    free(ptr);
}
void deletionAtTail(node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty";
        return;
    }
    node *ptr = head;
    node *ptr_1 = head;
    while (ptr->next != NULL)
    {
        ptr_1 = ptr;
        ptr = ptr->next;
    }
    ptr_1->next = NULL;
    free(ptr);
}
void deleteAtPos(node *&head, int pos)
{
    if (head == NULL)
    {
        cout << "List is empty";
        return;
    }
    if (pos == 0)
    {
        deletionAtFront(head);
        return;
    }
    node *ptr = head;
    node *ptr_1 = head;
    int curr_pos = 1;
    while (pos > curr_pos)
    {
        ptr = ptr->next;
        curr_pos++;
    }
    ptr_1 = ptr->next;
    ptr->next = ptr->next->next;
    free(ptr_1);
}

int main()
{
    int ch;
    cout << "\nEnter \n1.insert at head\n2.insert at tail\n3.insert at particular position\n4.delete from front\n5.delete from tail\n6.delete from particular position\n7.display\n8.exit\n";
    cin >> ch;
    node *head = NULL;
    int data, pos;

    while (ch != 8)
    {
        switch (ch)
        {
        case 1:
            cout << "Enter the data:";
            cin >> data;
            insertAtFront(head, data);
            display(head);
            break;

        case 2:
            cout << "Enter the data:";
            cin >> data;
            insertAtTail(head, data);
            display(head);
            break;
        case 3:
            cout << "Enter the data and position :";
            cin >> data;
            cin >> pos;
            insertAtPos(head, pos, data);
            display(head);
            break;
        case 4:
            deletionAtFront(head);
            display(head);
            break;
        case 5:
            deletionAtTail(head);
            display(head);
            break;
        case 6:
            cout << "Enter the position:";
            cin >> pos;
            deleteAtPos(head, pos);
            display(head);
            break;
        case 7:
            display(head);
            break;

        default:
            cout << "Enter a valid choice";
            break;
        }
        cout << "\nEnter \n1.insert at head\n2.insert at tail\n3.insert at particular position\n4.delete from front\n5.delete from tail\n6.delete from particular position\n7.display\n8.exit\n";
        cin >> ch;
    }
    cout << "THANK YOU!!";

    return 0;
}