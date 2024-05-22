#include <iostream>
#include <vector>
using namespace std;
class queue
{
    int front;
    int rear;
    vector<int> vec;

public:
    queue()
    {

        front = -1;
        rear = -1;
    }
    void enqueue(int data)
    {
        vec.push_back(data);
        rear++;
        if (front == -1)
        {
            front = 0;
        }
        std::cout << data << " is enqueued " << endl;
    }
    void dequeue()
    {  
        if (front == rear)
        {
            front = -1;
            rear = -1;
            vec.clear();
        }
        else
        {
            front++;
        }
        std::cout<<"Dequeue\n";
    }
    int get_front()
    {
        if (front == -1)
        {

            return -1;
        }
        return vec[front];
    }
    bool isempty()
    {
        return front == -1;
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
    q.enqueue(50);
    while (!q.isempty())
    {
        // std::cout<<"In while loop\n";
        std::cout << q.get_front() << endl;
        q.dequeue();
    }

    return 0;
}