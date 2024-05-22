#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int first,int last)
{
  int pivot=arr[last];
  int i=first-1;
  

  for(int j=first;j<last;j++)
  {
    if(arr[j]<pivot)
    {
        i++;
        swap(arr[i],arr[j]);
    }
  } 
  swap(arr[i+1],arr[last]);
  return i+1;
}

int kth_smallest(int arr[],int l,int r,int k)
{
    if(k>0&&k<=r-l+1 )
    {

 int pos=partition(arr,l,r);
 if((pos-l)==(k-1))
 {
    return arr[pos];
 }
 else if((pos-l)>(k-1))
 {
    kth_smallest(arr,l,pos-1,k);
 }
 else{
    kth_smallest(arr,pos+1,r,k-pos+l-1);
 }
    }
    else{
        return -1;
    }
}


    int main()
{
int n,k;cout<<"enter n: ";cin>>n;cout<<"Enter the array\n";
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<"Enter k: ";cin>>k;
cout<<"k_th element position is : "<<kth_smallest(arr,0,n,k);

return 0;
}