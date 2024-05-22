#include <iostream>
#include <vector>
using namespace std;
int prefixsum(vector<int> &v, int l,int r)
{ int x,y;
    for (int i = 1; i <r; i++)
    {
        v[i] = v[i] + v[i - 1];
         x=v[i];
    }
    for(int j=1;j<l;j++)
    {
        v[j]=v[j]+v[j-1];
         y=v[j];
    }
    int ans=x-y;
    return ans ;
}
int main()
{
    int n;
    cout << "Enter the number of element: ";
    cin >> n;
    vector<int> v;
    v.push_back(0);

    for (int i = 1; i <= n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    int l, r;
    cout << "Enter l and r :";
    cin >> l >> r;
     int ans= prefixsum(v, l,r);
     cout<<"Sum of value in range is: "<<ans;


    return 0;
}
