#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<vector<int>> matrix_rotate(vector<vector<int>> vec)
{
    // transposev 
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(vec[i][j],vec[j][i]);
        }
    }
    for(int i=0;i<vec.size();i++)
    {
        reverse(vec[i].begin(),vec[i].end());
    }
    return vec;
}

int main()
{
    int m, n;
    cout << "Enter the number of rows (m): ";
    cin >> m;

    cout << "Enter the number of columns (n): ";
    cin >> n;

    vector<vector<int>> vec(m, vector<int>(n, 0));
    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> vec[i][j];
        }
    }
    vec=matrix_rotate(vec); 
    //  print rotated matrix
    for(int i=0;i<vec.size();i++)
    {
        for(int j=0;j<vec[0].size();j++)
        {
            cout<<vec[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}