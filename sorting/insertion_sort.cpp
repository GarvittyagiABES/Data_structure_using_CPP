#include<iostream>
#include<vector>
using namespace std;
// repeatedly(until array is sorted) take element from unsorted array and insert in sorted subarray.
// it is used where our array is almost sorted\few sorted elements.
// complexity is n^2 in worst case and n in best case .
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    vector<int>v;
    cout<<"Enter the unsorted array\n";
    for(int i=0;i<n;i++)
    {
        int ele;cin>>ele;v.push_back(ele);
    }
    for(int i=1;i<n;i++)
    {  int current_ele=v[i];
        int j=i-1;
        while(j>=0&&v[j]>current_ele)
        {
            v[j+1]=v[j];
            j--;

        }
        v[j+1]=current_ele;
    }
    cout<<"Sorted array is\n";
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<"\t";
    }


return 0;
}