#include<bits/stdc++.h>
using namespace std;
int squarerootusingbinary(vector<int>arr,int x)
{
  int l=0;
  int r=arr.size()-1;
  int mid,ans=-1;
  while(r>=l)
  {
      mid=l+(r-l)/2;
    //   cout<<"mid is: "<<mid<<endl;
    if(arr[mid]*arr[mid]==x)
    {
        ans=mid;
        l=mid+1;
        // cout<<"ans is: "<<ans<<endl;
    }
    if(arr[mid]*arr[mid]>x)
    {
        r=mid-1;
        // cout<<"Hello\n";
        // cout<<"r is:"<<r<<endl;
    }
    else{
        l=mid+1;
        // cout<<"Hello_2\n";
        // cout<<"l is:"<<l<<endl;
    }
  }
  return ans;
}
int main()
{ int x;
cout<<"Enter number: ";
cin>>x;
vector<int>arr;
for(int i=0;i<=x;i++)
{
arr.push_back(i);
}
cout<<"Square root of "<<x<<" is: "<<squarerootusingbinary(arr,x);

return 0;
}