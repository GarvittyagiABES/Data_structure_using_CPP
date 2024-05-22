#include<bits/stdc++.h>
using namespace std;
class ABC{
   int x;
   public:
   void set(int n)
   {
    x=n;
   }
   int get()
   {
    return x;
   }

};
int main()
{
    ABC ob1;
    ob1.set(5);
    cout<<ob1.get()<<endl;




return 0;
}