#include <iostream>
#include <vector>
using namespace std;
void rotateMatrix(vector<vector<int>>&v)
{
    int n=v.size();
for(int i=0;i<n;i++)
{ for(int j=0;j<i;j++)
{
    swap(v[i][j],v[j][i]);
}


}
for(int i=0;i<n;i++)
{
    reverse(v[i].begin(),v[i].end());
}

}
int main()
{
    int n;
    cout << "Enter rows or coloumn of matrix: ";
    cin>>n;
    vector<vector<int>>v(n,vector<int>(n));
    cout<<"Enter the matrix"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           cin>> v[i][j];
        }
    }
rotateMatrix(v);
    cout<<"Resultant matrix\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           cout<< v[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}