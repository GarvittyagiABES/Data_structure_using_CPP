#include<iostream>
using namespace std;
void FirstAndLastIndex(string s,char ch,int *f,int *l)
{    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]==ch)
        {
           * f=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]==ch)
        {
            *l=i;
            break;
        }
    }
}
int main()
{   string s ;
cout<<"Enter string : ";
cin>>s;
cout<<"Enter character: ";
char ch;
cin>>ch;
int first=-1;
int last =-1;
FirstAndLastIndex(s,ch,&first,&last);
cout<< ch<<" is present at index: ";
cout<<first<<endl;
cout<<last<<endl;
    return 0;
}