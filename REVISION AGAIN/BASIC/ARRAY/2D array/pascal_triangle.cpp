#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int fact(int n)

{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}
int ncr(int n, int r)
{
    // cout << fact(n) << " " << fact(r) << " " << fact(n - r) << endl;

    return fact(n) / (fact(n - r) * fact(r));
}

int main()
{
    int r;

    cin >> r;
    vector<vector<int>> vec(r, vector<int>(r + 1, 1)); // r*r+1 ka vector bnga and initialise hogya zero (0) se
    
    cout << endl;
    for (int i = 0; i < r; i++)
    // 1st method 
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
              
    //         vec[i][j] = ncr(i, j);
          
    //     }
    //     cout << endl;
    // }
    //  2 method
    for(int i=1;i<r;i++)
    {
        for(int j=1;j<i;j++)
        {
            vec[i][j]=vec[i-1][j-1]+vec[i-1][j];
        }
        cout<<endl;
    }
    //  printing the vector
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}