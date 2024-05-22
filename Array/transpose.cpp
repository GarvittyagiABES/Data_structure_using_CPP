#include<iostream>
using namespace std;
int main()
{  int row,col,a[10][10];
cout<<"Enter rows and coloumns  of  matrix: ";
cin>>row>>col;
cout<<"Enter the  matrix element row wise\n";
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        cin>>a[i][j];
    }
}
cout<<"first matrix\n";
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        cout<<a[i][j]<<"\t";
    }
    cout<<endl;
}
cout<<"Transposed matrix\n";
for(int i=0;i<col;i++)
{
    for(int j=0;j<row;j++)
    {
        cout<<a[j][i]<<"\t";
    }
    cout<<endl;
}
}