#include <iostream>
using namespace std;
int main()
{
    int a[50], i, n, sum, pair = 0;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter sum: ";
    cin >> sum;
    cout << "Enter the array\n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (a[i] + a[j] + a[k] == sum)
                {

                    pair++;
                }
            }
        }
    }
    cout << "Pair has sum " << sum << " : " << pair;

    return 0;
}