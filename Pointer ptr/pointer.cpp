#include<iostream>
using namespace std;
void swap(int *p1,int *p2)
{
    int t;
   t= *p2;
   *p2=*p1;
   *p1=t;
}
int main()
{int x,y;
cin>>x>>y;
swap(&x,&y);
cout<<x<<" "<<y;

}