 #include<iostream>
 #include<vector>
 using namespace std;
//  Repeatedly(until array is sorted) find min/max element from sorted array & place it at beginning/end respectively
 void selection_sort(vector<int>&v)
 {
for(int i=0;i<v.size()-1;i++)
{
   int min=v[i];
  for(int j=i+1;j<v.size();j++)
  {
  if(v[j]<min)
  {
  swap(v[i],v[j]);
  }
  }
}
 }
 int main()
 {  
     vector<int> v;
     int n;
     cout<<"Enter no of element: ";
     cin>>n;
     cout<<"Enter the array\n";
     for(int i=0;i<n;i++)
     {
        int ele;cin>>ele;v.push_back(ele);
     }
     selection_sort(v);
     cout<<"After sorting array become\n";
     for(int i=0;i<n;i++)
     {
      cout<<v[i]<<"\t";
     }

 
 return 0;
 }