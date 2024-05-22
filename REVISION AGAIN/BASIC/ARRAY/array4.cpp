#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> Square(vector<int> arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    arr[i] *= arr[i];
  }
  sort(arr.begin(), arr.end());
  // int i = 0, j = 1;
  // while (i < arr.size())
  // {
  //   if (arr[i] > arr[j])
  //   {
  //     swap(arr[i], arr[j]);
  //     i--;
  //   }
  //   i++, j++;
  // }

  return arr;
}
vector<int> square_2(vector<int> arr)
{
  vector<int> result(arr.size(), 0);
   

  int i = 0, j = arr.size() - 1, k = j;
  while (i <= j && k >= 0)
  {
    if (abs(arr[i]) > abs(arr[j]))
    {
      result[k] = arr[i] * arr[i];
      i++;
      k--;
    }
    else
    {

      result[k] = arr[j] * arr[j];
      j--;
      k--;
    }
  }
   
  return result;

}
int main()
{
  int n;
  vector<int> arr1;

  cout << "Enter size of arr1 :" << endl;
  cin >> n;
  cout << "Enter elements of arr1" << endl;
  for (int i = 0; i < n; i++)
  {
    int ele;
    cin >> ele;
    arr1.push_back(ele);
  }
  vector<int> new_arr = square_2(arr1);
  // printing the array
  for (int i = 0; i < n; i++)
  {
    cout << new_arr[i] << " ";
  }
  cout << endl;

  return 0;
}