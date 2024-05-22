#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
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
void reverse_stack(stack<int>&st)
{
    stack<int>temp;
    while(!st.empty())
    {
        int ele=st.top();
        st.pop();
        temp.push(ele);
    }
    while(!temp.empty())
    {
        int ele=temp.top();
        temp.pop();
        insert_at_bottom_using_recursion(st,ele);
    }
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    reverse_stack(st);
    while (!st.empty())
    {
        std::cout << st.top() << " ";
        st.pop();
    }
    


return 0;
}