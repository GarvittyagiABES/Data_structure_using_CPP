#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    // while (!q.empty())
    // {
    //     std::cout << q.front() << " ";
    //     q.pop();
    // }
    stack<int> st;
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    std::cout << endl;
    
    while (!q.empty())
    {
        std::cout << q.front() << " ";
        q.pop();
    }

    return 0;
}