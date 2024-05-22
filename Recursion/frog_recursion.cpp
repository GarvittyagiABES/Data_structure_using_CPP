#include <iostream>
using namespace std;
int min_cost(int *h, int n, int i = 0)
{
    if (i == n - 1)
    {
        return 0;
    }
    if (i == n-2)
    {
        min_cost(h, n, i + 1) + abs(h[i] - h[i + 1]);
    }
    return min(min_cost(h, n, i + 1) + abs(h[i] - h[i + 1]), min_cost(h, n, i + 2) + abs(h[i] - h[i + 2]));
}
int main()
{
    int arr[] = {10, 30, 40, 20};
    int n = 4;
    cout << min_cost(arr, n);

    return 0;
}