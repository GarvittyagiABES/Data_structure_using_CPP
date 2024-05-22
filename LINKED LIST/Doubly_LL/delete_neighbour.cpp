#include <iostream>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node *prev;
    node(int data)
    {
        val = data;
        next = NULL;
        prev = NULL;
    }
};
class doubly_LL
{
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
node *delete_pointed_node(node *&ptr)
{
    node *ptr_1 = ptr->prev;
    ptr->prev->next = ptr->next;
    ptr->next->prev = ptr->prev;
    ptr->prev = NULL;
    ptr->next = NULL;
    cout << "Here4\n";
    // free(ptr);

    return ptr_1;
}
void delete_adjacent_ifequal(node *&head, node *&tail)
{
    node *ptr = tail;
    while (ptr->prev)
    {
        if (ptr->val == ptr->prev->val)
        {
            // cout<<"In if condition\n";
            delete_pointed_node(ptr->prev);
        }
        ptr = ptr->prev;
    }
    cout << "end of loop\n";
    return;
}
void delete_same_neighbour(node *&head, node *&tail)
{
    node *ptr = tail->prev;       // second last node
    while (ptr->prev)
    {
        if (ptr->next->val == ptr->prev->val)
        {
            ptr = delete_pointed_node(ptr);
        }
        else
        {
            ptr = ptr->prev;
        }
    }
}

int main()
{
    doubly_LL dll;
    dll.insertAtLast(1);
    dll.insertAtLast(2);
    dll.insertAtLast(1);
    dll.insertAtLast(3);
    dll.insertAtLast(4);
    dll.insertAtLast(5);
    dll.insertAtLast(4);
    dll.insertAtLast(6);
    dll.display();
    // delete_pointed_node(dll.head->next);
    // delete_adjacent_ifequal(dll.head,dll.tail);
    delete_same_neighbour(dll.head, dll.tail);
    dll.display();

    return 0;
}