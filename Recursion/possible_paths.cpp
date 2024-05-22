#include <iostream>
using namespace std;
int possible_path(int i, int j, int m, int n)
{
    if (i == m - 1 && j == n - 1)
    {
        return 1;
    }
    if (i >= m || j >= n)
    {
        return 0;
    }
    return possible_path(i, j + 1, m, n) + possible_path(i + 1, j, m, n);
}
int main()
{
    int m, n;
    cout << "Enter m and n : ";
    cin >> m >> n;
   cout<< possible_path(0,0,m,n);
    return 0;
}