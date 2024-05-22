#include <iostream>
#include <vector>
using namespace std;
void move_all_zero(vector<int> &v)
{
  
  for (int i = 0; i < v.size(); i++)
  {
    if (v[i] == 0)
    { 
      for (int j = i; j < v.size(); j++)
      {
        v[j] = v[j + 1];
      }
      v[v.size() - 1] = 0;
    }
  }
}
int main()
{
  cout << "Enter n: ";
  int n;
  cin>>n;
  vector<int> v;
  cout << "\nEnter element of vector\n";
  for (int i = 0; i < n; i++)
  {
    int ele;
    cin >> ele;
    v.push_back(ele);
  }
  move_all_zero(v);

  cout << "OUTPUT\n";
  for (int i = 0; i < n; i++)
  {
    cout << v[i] << "\t";
  }
  return 0;
}