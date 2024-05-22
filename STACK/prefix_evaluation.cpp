#include <iostream>
#include <stack>
#include <math.h>
using namespace std;
int calc(int a, int b, char op)
{
    if (op == '+')
    {
        return a + b;
    }
    if (op == '-')
    {
        return a - b;
    }
    if (op == '^')
    {
        return pow(a, b);
    }
    if (op == '*')
    {
        return a * b;
    }
    if (op == '/')
    {
        return a / b;
    }
}
int postfix_eval(string str)
{
    stack<int> st;
    for (int i = str.size()-1; i>=0; i--)
    {
        if (isdigit(str[i]))
        {
            st.push(str[i]-'0');
        }
        else
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();

            int res = calc(b, a, str[i]);
            st.push(res);
        }
    }
    return st.top();
}

int main()
{
    string str="-9+*531";
    std::cout<<postfix_eval(str);

    return 0;
}