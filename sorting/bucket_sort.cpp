#include <iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;
//  in bucket sort we use scatter and gather approach
//  this sort mainly used for floating numbers
/*Algorithm of bucket sort
 1. create bucket of size n
 2. insert element into bucket
                at  index=arr[i]*size of array
                if the range of ele is more than one
                thrn we hwve to normalise the range by finding min and max ele 
                range=(max-min)/size;
                index=(arr[i]-min)/range;
 3.sort individual bucket
 4.combine all element */
//  timt  complexity in best, average and worst case is n,n+k and n^2
//  space complexity is O(n+k)
void bucketSort(float arr[], int size)
    {       
        //  int size=arr.size();
    vector<vector<float>> bucket(size, vector<float>());
    // step-1
    // finding range
    float max_ele=arr[0];
    float min_ele=arr[0];
    for(int i=1;i<size;i++)
    {
        max_ele=max(arr[i],max_ele);
        min_ele=min(arr[i],min_ele);
    }
    float range=(max_ele-min_ele)/size;
// step-2
// if range is between 0-1
// for (int i = 0; i < size; i++)
// {
//     int index = arr[i] * size;
//     bucket[index].push_back(arr[i]);
// }
// if range is not between 0-1
for (int i = 0; i < size; i++)
{
    int index = (arr[i]-min_ele)/range;
    float diff=(arr[i]-min_ele)/range-index;
    if(diff==0&&arr[i]!=min_ele)
    {

    bucket[index-1].push_back(arr[i]);
    }
    else{

    bucket[index].push_back(arr[i]);
    }
}
//    step-3
for (int i = 0; i < size; i++)
{
    if (!bucket[i].empty())
    {
        sort(bucket[i].begin(), bucket[i].end());
    }
}
//   step-4
int k = 0;
for (int i = 0; i < size; i++)
{
    for (int j = 0; j < bucket[i].size(); j++)
    {
        arr[k++] = bucket[i][j];
    }
}
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    float arr[n];
    cout << "Enter the array\n";
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
    bucketSort(arr, n);
    cout << "Array after sorting\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nThankyou";
    return 0;
}