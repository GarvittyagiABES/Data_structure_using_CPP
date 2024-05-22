#include <iostream>
#include <algorithm>
using namespace std;
int gcd(int num1, int num2)
{
    if(num2==0)
    {
        return num1;
    }
    else
        return gcd(num2, num1 % num2);//  if we substract or modulo a smaller number from a larger ( we can reduce larger number ) number then their is no effect on hcf this is called  EUCLID'S ALGORITHM
        //  return gcd(num2, num1 - num2);
        
}
int main()
{
    int num1, num2;
    cout << "Enter the numbers : ";
    cin >> num1 >> num2;
    if (num2 > num1)
    {
        swap(num1, num2);
    }
    cout<<"Gcd is : "<<gcd(num1,num2);

    return 0;
}