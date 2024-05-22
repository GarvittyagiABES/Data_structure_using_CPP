#include <iostream>
#include <math.h>
#include <stack>
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
int precedence(char ch)
{
    if (ch == '^')
    {
        return 4;
    }
    if (ch == '*')
    {
        return 3;
    }
    if (ch == '/')
    {
        return 3;
    }
    if (ch == '+')
    {
        return 2;
    }
    if (ch == '-')
    {
        return 2;
    }
    return 1;
}
int infix_evaluation(string &str)
{
    stack<int> num;
    stack<char> op;
    for (int i = 0; i < str.size(); i++)
    {
        if (isdigit(str[i]))
        {
            num.push(str[i] - '0');
        }
        else if (str[i] == '(')
        {
            op.push(str[i]);
        }
        else if (str[i] == ')')

        {
            while (!op.empty() and op.top() != '(')
            {
                char ope = op.top();
                op.pop();

                int a = num.top();
                num.pop();
                int b = num.top();
                num.pop();

                int res = calc(b, a, ope);
                num.push(res);
            }
            if (!op.empty())
            {
                op.pop();
            }
        }
        else
        {
            while (!op.empty() and precedence(op.top()) >= precedence(str[i]))
            {

                char ope = op.top();
                op.pop();

                int a = num.top();
                num.pop();
                int b = num.top();
                num.pop();

                int res = calc(b, a, ope);
                num.push(res);
            }
            op.push(str[i]);
        }
    }
    while (!op.empty())
    {

        char ope = op.top();
        op.pop();

        int a = num.top();
        num.pop();
        int b = num.top();
        num.pop();

        int res = calc(b, a, ope);
        num.push(res);
    }
    num.top();
}
int main()
{
    string str = "1+(2*(3-1))+2";
    std::cout << infix_evaluation(str) << endl;

    return 0;
}