#include <bits/stdc++.h>
using namespace std;
string decodedstring(string s)
{
    string res = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ']')
        {
            res.push_back(s[i]);
        }
        else
        {
            string str = "";
            while (!res.empty() && res.back() != '[')

            {
                str.push_back(res.back());
                res.pop_back();
            }
            reverse(str.begin(),str.end());
            res.pop_back();
            string num ="";
            while(!res.empty()&&res.back()>='0'&&res.back()<='9')
            {
                num.push_back(res.back());
                res.pop_back();
            }
            reverse(num.begin(),num.end());
            int int_num=stoi(num);
            while(int_num--)
            {
                res+=str;
            }

        }
    }
    return res;
}
int main()
{
    string str;
    cout << "Enter the string to decode: ";
    cin >> str;
    cout << "your decoded string is " << endl;
    cout << decodedstring(str);
    return 0;
}