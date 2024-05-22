#include <iostream>
#include <algorithm>
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
class queue
{
    node *head;
    node *tail;
    int size;

public:
    queue()
    {
        head = NULL;
        tail = NULL;
    }
    void enqueue(int data)
    {
        node *new_node = new node(data);
        if (head == NULL)
        {

            head = tail = new_node;
        }
        else
        {
            tail->next = new_node;
            tail = new_node;
        }
        size++;
    }
    void dequeue()
    {
        if (head == NULL)
        {
            std::cout << "UNDERFLOW\n";
            return;
        }
        node *old_head = head;
        node *new_head = head->next;
        head = new_head;
        if (head == NULL)
        {
            tail = NULL;
        }
        old_head->next = NULL;
        delete old_head;
        size--;
    }
    int get_size()

    {
        return size;
    }
    int isempty()
    {
        return head==NULL;
    }
    int get_front()
    { if(head==NULL)
    {
        return -1;
    }
    return head->val;

    }

};
int main()
{
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.dequeue();
    q.enqueue(40);
    while(not q.isempty())
    {
        std::cout<<q.get_front()<<endl;
        q.dequeue();
    }

    return 0;
}