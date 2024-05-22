#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter row" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)
        {
            cout << " ";
        }
        for (j = 1; j <=  i ; j++)
        {
            cout << j;
        }
        for(j=i-1;j>=1;j--)
        {
            cout<<j;
        }
        cout << endl;
    }
}