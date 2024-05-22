#include<bits/stdc++.h>
using namespace std;
int peakinmountainarray(vector<int>&v)
{  int h,l,ans,mid;
h=v.size()-1;
l=0,ans=-1;;
while(h>=l)
{
    mid=(h+l)/2;
    if(v[mid]>v[mid-1])
    {
        ans=mid;
        l=mid+1;
    }
    else{
        h=mid-1;
    }
}
return ans;

}
int main()
{ int n;
    vector<int>v;
    cout<<"Enter the num of element: ";
    cin>>n;
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;v.push_back(ele);
    }
    
    cout<<"Peak element is at index : "<<peakinmountainarray(v);

return 0;
}