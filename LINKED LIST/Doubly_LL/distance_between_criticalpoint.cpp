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
vector<int> distance_bw_critical_point(node *head, node *tail)
{
    vector<int> vec(2,INT64_MAX);
    int firstcp=-1,lastcp=-1;
    node *ptr = head->next;
    node *second_ptr = tail->prev;
    if(second_ptr==NULL)
    {
      vec[0]=vec[1]=-1;
      return vec;
    }

    while (ptr->next != second_ptr->prev && ptr != second_ptr)

    {
        if (ptr->val > ptr->prev->val && ptr->val > ptr->next->val)
        {
            vec.push_back(ptr->val);
        }
        else if (second_ptr->val > second_ptr->prev->val && second_ptr->val > second_ptr->next->val)
        {
            vec.push_back(second_ptr->val);
        }
    }

    return;
}
int main()
{
    doubly_LL dll;
    dll.insertAtLast(1);
    dll.insertAtLast(5);
    dll.insertAtLast(2);
    dll.insertAtLast(6);
    dll.insertAtLast(3);
    // dll.insertAtLast(15);
    // dll.insertAtLast(16);
    // dll.insertAtLast(17);
    // dll.insertAtLast(11);
    // dll.insertAtLast(18);
    // dll.insertAtLast(44);
    // dll.insertAtLast(45);

    dll.display();
    distance_bw_critical_point(dll.head, dll.tail);

    return 0;
}
