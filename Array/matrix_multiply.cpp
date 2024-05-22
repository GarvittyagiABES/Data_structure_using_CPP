#include<iostream>
using namespace std;
int main()
{  int row,col,a[10][10];
cout<<"Enter rows and coloumns  of first matrix: ";
cin>>row>>col;
cout<<"Enter the first matrix element row wise\n";
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
int row2,col2,b[10][10],c[10][10];
cout<<"Enter rows and columns of second matrix\n";
cin>>row2>>col2;
cout<<"Enter element of second matrix row wise\n";
for(int i=0;i<row2;i++)
{
    for(int j=0;j<col2;j++)
    {
        cin>>b[i][j];
    }
}
cout<<"second matrix\n";
for(int i=0;i<row2;i++)
{
    for(int j=0;j<col2;j++)
    {
        cout<<b[i][j]<<"\t";
    }
    cout<<endl;
}
// Multiplication
if(col==row2)
{
for(int i=0;i<row;i++)
{ 
    for(int j=0;j<col2;j++)
    {
    c[i][j]=0;
        for(int k=0;k<col;k++)
        {
        c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
    }
     
}
}
else
{
    cout<<"can't be multiplied\n";
}
cout<<"Resultant matrix\n";
for(int i=0;i<col;i++)
{
    for(int j=0;j<row2;j++)
    {
        cout<<c[i][j]<<"\t";
    }
    cout<<endl;
}
    return 0;
}