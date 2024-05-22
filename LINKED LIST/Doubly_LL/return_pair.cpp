#include <iostream>
#include <vector>
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
vector<int> pair_of_distinct_node(node *head, node *tail, int x)
{
    vector<int> vec(2);
    vec[0] = -1;
    vec[1] = -1;
    while (head->val <= tail->val)
    {
        if (head->val + tail->val > x)
        {
            tail = tail->prev;
        }
        else if (head->val + tail->val < x)
        {
            head = head->next;
        }
        else
        {
            vec[0] = head->val;
            vec[1] = tail->val;
            return vec;
        }
    }
    return vec;
}

int main()
{
    doubly_LL dll;
    dll.insertAtLast(1);
    dll.insertAtLast(2);
    dll.insertAtLast(5);
    dll.insertAtLast(6);
    dll.insertAtLast(8);
    dll.insertAtLast(10);
    // dll.insertAtLast(15);
    // dll.insertAtLast(16);
    // dll.insertAtLast(17);
    // dll.insertAtLast(11);
    // dll.insertAtLast(18);
    // dll.insertAtLast(44);
    // dll.insertAtLast(45);
    int x=3;
    dll.display();
    vector<int>vec=pair_of_distinct_node(dll.head,dll.tail,x);
    cout<<vec[0]<<" "<<vec[1];


    return 0;
}