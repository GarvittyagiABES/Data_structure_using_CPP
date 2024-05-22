#include<iostream>
using namespace std;
string  remove_occ(string  &str,int i,int n,char occ)
{ 
    if(i==n)
    {
         return  " ";
    }
    string curr="";
    curr+=str[i];
    return ((str[i]==occ)?"":curr)+ remove_occ(str,i+1,n,occ);
}
int main()
{  string str;
cout<<"Enter the string : ";
cin>>str;
int n=str.length(); 
char occ;       
cout<<"Enter the word whose occrence you want to remove: ";
cin>>occ;
str=remove_occ(str,0,n,occ);
cout<<endl<<"Your string after removal of "<<occ<<" is: "<<str<<endl;
return 0;
}