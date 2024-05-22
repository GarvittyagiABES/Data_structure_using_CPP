#include <iostream>
using namespace std;
int main()
{
    int n, m, i, j;
    cout << "Enter row" << endl;
    cin >> n;
    cout << "Enter coloum" << endl;
    cin >> m;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (j==1 || j==m || i== 1 || i == n)
            {
                cout << j;
            }
            else
            {
                cout << " ";
            }
        }cout<<endl;
    }
    return 0;
}