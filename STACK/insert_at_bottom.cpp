#include <bits/stdc++.h>
using namespace std;
void insert_at_bottom(stack<int> &st, int num)

{
    stack<int> res;
    while (!st.empty())
    {
        int ele = st.top();
        st.pop();
        res.push(ele);
    }
    st.push(num);
    while (!res.empty())
    {
        int ele = res.top();
        res.pop();
        st.push(ele);
    }
}
void insert_at_bottom_using_recursion(stack<int>&st,int num)
{
   if(st.empty())
   {
    st.push(num);
    return;
   }
   int ele=st.top();
   st.pop();
   insert_at_bottom_using_recursion(st,num);
   st.push(ele);
} 
int main()
{
    stack<int> st;
    st.push(2);
    st.push(3);
    st.push(4);
    insert_at_bottom_using_recursion(st, 1);
    while (!st.empty())
    {
        std::cout << st.top() << " ";
        st.pop();
    }

    return 0;
}