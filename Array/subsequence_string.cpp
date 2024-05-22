#include<iostream>
#include<string>
#include<vector>
using namespace std;
void subset_string(string& s,int i,string result,vector<string>&li)
{ int n=s.length();
   if(i==n) 
   {
li.push_back(result);
return; 
   }
   subset_string(s,i+1,result+s[i], li);
   subset_string(s,i+1,result, li);
}
int main()
{   vector<string> res;
string s="abc";
subset_string(s,0,"",res);
for(int i=0;i<res.size();i++)
{
 cout<<res[i]<<"  ";
}

return 0;
}