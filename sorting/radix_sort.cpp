#include<iostream>
#include<vector>

using namespace std;
//  let d be digit in max ele
//  time complexity is O(d*(n+k)) here k is 10 can be ignored 
// space complexity is  O(n+k) here k is = 10 so can be ignored
void countSort(vector<int>&v,int p)
{  int n=v.size();
//   create freq array
     vector<int>freq(10,0);
     for(int i=0;i<n;i++)
     {
        freq[(v[i]/p)%10]++;
     }
//  commulative frequency array 
for(int i=1;i<10;i++)
{
    freq[i]+=freq[i-1];
}
vector<int>ans(10);
for(int i=n-1;i>=0;i--)
{
  ans[-- freq[(v[i]/p)%10]]=v[i];
}
for(int i=0;i<n;i++)
{
    v[i]=ans[i];
}

}
void radixSort(vector<int>&arr)
{
  int max=-1;
  for(int i=0;i<arr.size();i++)
  {
    if(arr[i]>max)
    {
        max=arr[i];
    }
  }
  for(int pos=1;max/pos>0;pos*=10)
  {
     countSort(arr,pos);
  }
}
int main()
{
  int n;
    cout << "Enter n: ";
    cin >> n;
    vector<int> arr;
    cout << "Enter the array\n";
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
    radixSort(arr);
    cout << "Array after sorting\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nThankyou";

return 0;
}