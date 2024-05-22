#include<iostream>
#include<vector>

using namespace std;
int MaxOnesRow(vector<vector<int>>&vec)
{
   int maxOnes=INT32_MIN,i,j;
   int maxOnesRow=-1;
   int coloumns=vec[0].size();
   for( i=0;i<vec.size();i++)
   {
    for( j=0;j<vec[i].size();j++)
    {
        if(vec[i][j]==1)
        {int   numberOfOnes=coloumns-j;
        if(numberOfOnes>maxOnes)
        {
            maxOnes=numberOfOnes;
            maxOnesRow=i;
        }
        break;
            
        }
    }
   }
   return maxOnesRow;
}
int main()
{
     int n,m;
 vector< vector<int> >vec(n,vector<int>(m));

    cout<<"Enter rows and col of matrix: ";
    cin>>n>>m;
    cout<<"Enter the matrix\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>vec[i][j];
        }
    }
    cout<<"Your input matrix is\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<vec[i][j]<<"\t";

        }
        cout<<endl;
    }

    int ans=MaxOnesRow(vec);
    cout<<"Max ones row is: "<<ans;
    return 0;

}