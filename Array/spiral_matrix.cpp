#include<iostream>
#include<vector>
using namespace std;
 void spiralmatrix(vector<vector<int>>&matrix)
{
int left=0,top=0,right=matrix[0].size()-1,bottom=matrix.size()-1,direction=0;
while(top<=bottom&&left<=right)

{
   
   if(direction==0)
   {
    for(int col=left;col<=right;col++)
    {
        cout<<matrix[top][col]<<"\t";

    }
    
    top++;
   }
   if(direction==1)
   {
    for(int row=top;row<=bottom;row++)
    {
        cout<<matrix[row][right]<<"\t";
    }
    right--;
   }
   if(direction==2)
   {
    for(int col=right;col<=left;col--)
    {
        cout<<matrix[bottom][col]<<"\t";
    }
    bottom--;
   }
   if(direction==3)
   {
    for(int row=bottom;row<=top;row--)
    {
        cout<<matrix[row][left]<<"\t";
    }
   }
   left++;
}
direction=(direction+1)%4;
} 
int main()
{
    int m,n;
    cout<<"Enter rows and coloumns of matrix: ";
   cin>>n>>m;
   vector<vector<int>>matrix(n,vector<int>(m));
   cout<<"Enter the matrix\n";
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        cin>>matrix[i][j];
    }
   }
   spiralmatrix(matrix);
   cout<<"Resultant matrix\n";
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        cout<<matrix[i][j]<<"\t";
    }
   }

    }