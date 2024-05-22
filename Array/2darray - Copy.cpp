#include<iostream>
using namespace std;
int main()
{  int row,col,a[10][10];
cout<<"Enter row and coloumns : ";
cin>>row>>col;
cout<<"Enter the array\n";
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        cin>>a[i][j];
    }
}
cout<<"Entered array\n";
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        cout<<a[i][j]<<"\t";
    }
    cout<<endl;
}
    return 0;
}