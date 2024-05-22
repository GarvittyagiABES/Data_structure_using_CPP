#include <iostream>
#include <stack>
using namespace std;
int minimum_no_of_bracket(string str)
{
    stack<char> s;
    int count = 0;

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
            if (str[i] == ')' and s.top() == '(')
            {
                s.pop();
                //    std:: cout<<"else ka if\n";
                continue;
            }
            else if (str[i] == '}' and s.top() == '{')
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
                //  when stack empty and their is a closed bracket
                count++;
            }
        }
        std::cout<<s.size()<<endl;
    }

    return count;
}

int main()
{
    string str;
    std::cin>>str;
    std::cout<<minimum_no_of_bracket(str);
    return 0;
}