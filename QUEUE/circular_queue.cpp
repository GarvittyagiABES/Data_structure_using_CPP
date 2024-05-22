#include <iostream>
#include <vector>
using namespace std;
class circular_queue
{
    int front ;
    int rear;
    

public:
    vector<int> vec;
    
    circular_queue(int n)
    {
       vec.resize(n); 
       front=0;rear=n-1;
    }
    void push(int data)
    {   
        if(vec.size()<)
        if (vec.empty())
        {
            front++;
            rear++;

            vec[rear] = data; 
            return;
        }
        rear++;
        vec[rear] = data;
    }
    void pop()
    {
        front++;
    }
    bool isfull()
    {
        return vec.
    }

};
int main()
{

    return 0;
}