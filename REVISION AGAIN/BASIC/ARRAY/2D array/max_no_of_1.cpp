#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int first_one_idx(vector<vector<int>> vec, int m, int n, int row)
{
    for (int j = 0; j < n; j++)
    {
        if (vec[row][j] == 1)
        {
            return j; // Return the column index where the first 1 is found in the specified row
        }
    }
    return -1;
}
int rows_with_max_ones(vector<vector<int>> &v)
{
    int max_one = -1, row_with_max_ones = -1;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            if (v[i][j] == 1)
            {
                int no_of_ones = v[0].size() - j;
                if (no_of_ones > max_one)
                {
                    max_one = no_of_ones;
                    row_with_max_ones = i;
                }
                break;
            }
        }
    }
    return row_with_max_ones;
}
int row_with_leftest_one(vector<vector<int>> &v)
{
    int leftest_one = -1,
        leftest_one_row = -1;
        int j=v[0].size()-1;
   while(j>=0&&v[0][j]==1)
   {
    leftest_one=j;
    leftest_one_row=0;
    j--;
   }
   for(int i=1;i<v.size();i++)
   {
    while(j>=0&&v[i][j]==1)
    {
    leftest_one=j;
    leftest_one_row=i;
    j--;

    }
   }
   return leftest_one_row;
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
    int row;
    cout << "Enter row in which you want to count no of one: ";
    cin >> row;
    int phla_wala;
    phla_wala = first_one_idx(vec, m, n, row);
    int no_of_one = n - phla_wala;
    cout << " No of one in row " << row << " is:  " << no_of_one << endl;
    cout << "Row with max no of ones is: " << rows_with_max_ones(vec);

    return 0;
}