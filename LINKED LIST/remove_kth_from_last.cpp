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
void remove_kth_from_last(node *&head, int k)
{
    int length = 0;
    node *ptr = head;
    node *ptr_1 = head;
    while (ptr != NULL)
    {
        length++;
        ptr = ptr->next;
    }
    //if k is equal to length of linked list
    if (length == k)
    {
    //we have to delete first node
        head = head->next;
        ptr_1->next = NULL;
        free(ptr_1);
        return;
    }

    ptr = head;
    int count = length - k - 1;
    while (count != 0)
    {
        ptr = ptr->next;
        count--;
    }
    ptr_1 = ptr->next;
    ptr->next = ptr->next->next;
    ptr_1->next = NULL;
    free(ptr_1);
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
    int k ;
    cout << "Enter k: ";
    cin >> k;
    remove_kth_from_last(ll.head, k);
    ll.display();
    return 0;
}