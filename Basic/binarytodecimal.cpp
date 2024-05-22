#include <iostream>
using namespace std;
int main()
{
    int n, ans = 0, pow = 1;
    cout << "enter the number in binary" << endl;
    cin >> n;
    while (n > 0)
    {
        int digit = n % 10;

        ans += (digit * pow);
        pow *= 2;
        n = n / 10;
    }
    cout << "Decimal form of entered binary number is :" << ans << endl;
    return 0;
}