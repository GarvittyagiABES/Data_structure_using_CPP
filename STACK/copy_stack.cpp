//  whenever we transfer data of one stack to another data get reverse
#include <bits/stdc++.h>
using namespace std;
void reverse_stack(stack<int> &st)
{
    stack<int> temp;
    while (!st.empty())
    {
        int top_ele = st.top();
        st.pop();
        temp.push(top_ele);
    }
    while (!temp.empty())
    {
        int top_ele = temp.top();
        temp.pop();
        st.push(top_ele);
    }
}
void  Reverse_using_recursion(stack<int> &st,stack<int>& res)
{  if(st.empty())
  {
    return ;
  }
  int top_ele=st.top();
  st.pop();
  Reverse_using_recursion(st,res);
  res.push(top_ele);
}
int main()
{
    stack<int> st;
    stack<int> reverse_st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    Reverse_using_recursion(st,reverse_st);
    // reverse_stack(st);
    while (! reverse_st.empty())
    {
        std::cout << reverse_st.top()<<"  ";
        reverse_st.pop();
    }

    return 0;
}
