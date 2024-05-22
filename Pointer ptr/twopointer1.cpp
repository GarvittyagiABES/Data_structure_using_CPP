#include<iostream>
using namespace std;
int main()
{ int a[50],n,count=0;
cout<<"Enter the size of array: ";
cin>>n;
cout<<"Enter the array\n";
for( int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n;i++)
{
    if(a[i]==0)
    {
        count++;
    }

}
for(int i=0;i<count;i++)
{
    a[i]=0;
}
for(int i=count;i<n;i++)
{
    a[i]=1;
}
cout<<"Your resultant array is\n";
for(int i=0;i<n;i++)
{
    cout<<a[i];
}
    return 0;
}