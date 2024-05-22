#include <iostream>
#include <unordered_map>
using namespace std;
bool chkNoOneToManyMapping( string s1,string s2)
{
    unordered_map<char, char> m;
     for(int i=0;i<s1.length();i++)
    {
        if(m.find(s1[i])!=m.end())
        {
         if(m[s1[i]]!=s2[i])
         {
            return false;
         }
        }
        else{
            m[s1[i]]=s2[i];

        }
    }
    
    return true;
}
bool Is_isomorohic(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }
    //  chking one to many mapping s1->s2
      bool s1tos2=chkNoOneToManyMapping(s1,s2);
    //  chking one to many mapping s2->s1
      bool s2tos1=chkNoOneToManyMapping(s2,s1);
      return s1tos2&&s2tos1;
   
   

     
   
}
int main()
{

    string str1, str2;
    std::cin >> str1 >> str2;
    std::cout << (Is_isomorohic(str1, str2) ? "Yes string is isomorphic" : "No string is not a isomorphic");
    return 0;

    return 0;
}