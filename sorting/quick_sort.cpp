#include<iostream>
using namespace std;
// it is not a stable algorithm 
// time complexity is O(n(n-1)/2) i.e. in worst case it is n^2 space complexity in worst case is O(n)
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
void quickSort(int arr[],int first,int last)
{
    if(first>=last)
    {
        return;
    }
    int pivot=partition(arr,first,last);
    quickSort(arr,first,pivot-1);
    quickSort(arr,pivot+1,last);

}
int main()
{  
    int n;
cout<<"Enter n: ";
cin>>n;
int arr[n];
cout<<"Enter the array\n";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
quickSort(arr,0,n-1);
cout<<"After sorting \n";
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}
// Application of quick sort 
// 1. memory is a concern 
// 2. inbuilt sorting algorithm use this 
// 3. perform better in smaller dataset 
// 4. New memory is costly
