#include <iostream>
#include<vector>
using namespace std;
void array_subset_sum(int *a,int n,int i,int sum,vector<int>& result)
{
   if(i==n)
   {
     result.push_back(sum);
     return;
   }
   array_subset_sum(a,n,i+1,sum+a[i],result);
   array_subset_sum(a,n,i+1,sum,result);
}
int main()
{
    int n;
    cout << "Enter no. of element: ";
    cin >> n;
    int a[n];
    vector<int>v;
    cout << "Enter element of array: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    array_subset_sum(a,n,0,0,v);

    for (int i:v)
    {
        cout<<i<<" ";
    }


    return 0;
}