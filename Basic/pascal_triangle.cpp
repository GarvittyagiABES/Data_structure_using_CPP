#include<iostream>

using namespace std;
int fact(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int ncr(int n,int r)
{
    int ans=fact(n)/(fact(r)*fact(n-r));
    return ans;
}
int main()
{ 
    
int n;
cout<<"Enter n: ";
cin>>n;
cout<<"\n";
for(int i=0;i<n;i++)
{
    for(int j=0;j<=i;j++)
    {
        cout<<ncr(i,j);
    }
    cout<<endl;
}
    return 0;
}