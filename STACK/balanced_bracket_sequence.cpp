#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool balance_parenthesis(string str)
{
    stack<char> s;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '[' || str[i] == '{' || str[i] == '(')
        {
            s.push(str[i]);
        //    std:: cout<<"only if\n";
            continue;
        }
        else
        {
            // closing bracket
            if (str[i] == ')' and  s.top() == '(')
            {
                s.pop();
            //    std:: cout<<"else ka if\n";
                continue;
            }
            else if (str[i] == '}'  and s.top() == '{')
            {
                s.pop();
            //    std:: cout<<"else ka else  if\n";
                continue;
            }
            else if (str[i] == ']' and s.top() == '[')
            {
                s.pop();
            //    std:: cout<<"else ka else  if 2\n";
                continue;
            }
            else
            {
            //    std:: cout<<"else ka else\n";
                return false;
            }
        }
    }

    return s.empty();
}
int main()
{
    string str;
    std::cout << "Enter the string: ";
    cin >> str;
    if (balance_parenthesis(str))
    {
        std::cout << "Balanced\n";
    }
    else
    {
        std::cout << "Not Balanced\n";
    }

    return 0;
}