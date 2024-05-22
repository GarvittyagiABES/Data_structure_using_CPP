#include <bits/stdc++.h>
using namespace std;
void delete_from_bottom(stack<int> &st)
{
    stack<int> temp;
    while (st.size() - 1)
    {
        int ele = st.top();
        st.pop();
        temp.push(ele);
    }
    st.pop();
    while (!temp.empty())
    {
        int ele = temp.top();
        temp.pop();
        st.push(ele);
    }
}
void delete_from_bottom_using_recursion(stack<int>&st)
{
    int count=st.size()-1;
    if(!count)
    {
        st.pop();
        return;
    }
    int ele=st.top();
    count--;
    st.pop();
    delete_from_bottom_using_recursion(st);
    st.push(ele);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    delete_from_bottom_using_recursion(st);
    while (!st.empty())
    {
        std::cout << st.top() << " ";
        st.pop();
    }

    return 0;
}