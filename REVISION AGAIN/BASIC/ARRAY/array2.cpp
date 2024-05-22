#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool x_exists(vector<int> vec, int x)
{
  sort(vec.begin(), vec.end());
  int i = 0, j = vec.size() - 1;
  while (i < j)
  {
    if (vec[i] + vec[j] == x)
    {
      return true;
    }
    if (vec[i] + vec[j] > x)
    {
      j--;
    }
    else
    {
      i++;
    }
  }
  return false;
}
int main()
{
  int n, x;
  vector<int> arr1;

  cout << "Enter size of arr1 and x:" << endl;
  cin >> n >> x;
  cout << "Enter elements of arr1" << endl;
  for (int i = 0; i < n; i++)
  {
    int ele;
    cin >> ele;
    arr1.push_back(ele);
  }
  if (x_exists(arr1, x))
  {
    cout << "YES!!" << endl;
  }
  else
  {
    cout << "NO!!" << endl;
  }

  return 0;
}