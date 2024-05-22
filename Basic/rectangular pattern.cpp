#include<iostream>
using namespace std;
int main()
{   int i,j,n,m;
 cout<<"Enter the number of row"<<endl;
 cin>>n;
 cout<<endl<<"Enter the number of coloumn"<<endl;
 cin>>  m;
 for(i=0;i<n;i++)
 {
    for ( j = 0; j< m ; j++)
    {
        cout<<"*";
    }
    cout<<endl;
 }
    return 0;
}