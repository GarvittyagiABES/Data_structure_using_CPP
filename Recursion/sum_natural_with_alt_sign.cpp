#include <iostream>
#include <math.h>
using namespace std;
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return sum(n - 1) + ((n % 2 == 0) ? (-n) : n);
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int res = sum(n);
    cout << "Your sum is: " << res;

    return 0;
}