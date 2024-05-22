#include <iostream>
#include <queue>
using namespace std;
class stack_push_efficient
{
    queue<int> q;

public:
    stack_push_efficient()
    {
    }
    void push(int data)
    {
        q.push(data);
    }
    void pop()
    {
        queue<int> temp;
        while (q.size() > 1)
        {
            temp.push(q.front());
            q.pop();
        }
        q.pop();
        while (!temp.empty())
        {
            q.push(temp.front());
            temp.pop();
        }
    }
    int get_top()
    {
        return q.back();
    }
    int isempty()
    {
        return q.empty();
    }
};
class stack_pop_efficient
{
    queue<int> q;

public:
    stack_pop_efficient()
    {
    }
    void pop()
    {
        q.pop();
    }
    void push(int data)
    {
        queue<int> temp;
        while (!q.empty())
        {
            temp.push(q.front());
            q.pop();
        }
        q.push(data);
        while (!temp.empty())
        {
            q.push(temp.front());
            temp.pop();
        }
    }
        int isempty()
        {   
            return q.empty();
        }
        int get_top()
        {
            if(q.empty())
            {
                return -1;
            }
            return q.front();
        }
};
int main()
{
    stack_pop_efficient st;
    st.push(1);
    st.push(2);
    st.push(3);
    std::cout << st.get_top() << "\n";
    st.push(4);
    st.push(5);
    std::cout << st.get_top() << "\n";
    st.push(8);
    st.pop();
    st.pop();
    std::cout << st.get_top() << "\n";
    while(! st.isempty())
    {
        std::cout<<st.get_top()<<"  ";
        st.pop();
    }

    return 0;
}