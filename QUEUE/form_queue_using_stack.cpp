/*we can make queue with two variation
1.push efficient: enqueue complexity is O(1) but dequeue complexity may be bad
2.pop efficient :  dequeue complexity is O(1) but enqueue complexity may be bad
you have to choose atq wheather more insertion or deletion

*/
// push efficient
#include <iostream>

#include <stack>

using namespace std;
// class queue_push_effi
// {
//     stack<int> st;

// public:
//     queue_push_effi()
//     {
//     }
//     void push(int data)
//     {
//         st.push(data);
//     }
//     void pop()
//     {
//         if (st.empty())
//         {
//             return;
//         }
//         stack<int> temp;
//         while (st.size() > 1)
//         {
//             temp.push(st.top());
//             st.pop();
//         }
//         st.pop();
//         while (!temp.empty())
//         {
//             st.push(temp.top());
//             temp.pop();
//         }
//     }
//     int isempty()
//     {
//         return st.empty();
//     }
//     int get_front()
//     {
//         stack<int> temp;
//         while (st.size() > 1)
//         {
//             temp.push(st.top());
//             st.pop();
//         }
//         int a = st.top();

//         while (!temp.empty())
//         {
//             st.push(temp.top());
//             temp.pop();
//         }
//         return a;
//     }
// };
class queue_pop_effi
{
    stack<int> st;

public:
    queue_pop_effi()
    {
    }
    void push(int data)
    {

        stack<int> temp;
        if (st.empty())
        {
            st.push(data);
            return;
        }
        while (!st.empty())
        {
            temp.push(st.top());
            st.pop();
        }
        st.push(data);

        while (!temp.empty())
        {
            st.push(temp.top());
            temp.pop();
        }
    }
    void pop()
    {
        if (st.empty())
        {
            return;
        }
        st.pop();
    }
    int isempty()
    {
        return st.empty();
    }
    int get_front()
    {
        if (st.empty())
        {
            return -1;
        }
        return st.top();
    }
};

int main()
{
    queue_pop_effi q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.pop();
    while (!q.isempty())
    {
        std::cout << q.get_front() << " ";
        q.pop();
    }

    return 0;
}
