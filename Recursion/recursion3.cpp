#include<iostream>
using namespace std;
int sumofdigit (int n)
{ 
    if(n<10)
    {
        return n;
    }
     int m=n%10;
    return m+sumofdigit(n/10);
    
}
int main()
{int n;
 cin>>n;
 cout<<"Sum of digit is: "<<sumofdigit(n);

return 0;
}