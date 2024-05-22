#include <iostream>
#include <string>
#include <vector>
/* anagram means
1. same letters
2. same count of letters
*/
using namespace std;
bool IsAnagram(string str1, string str2)
{
  if (str1.length() != str2.length())
    return false;
  vector<int> freq(26, 0);
  for (int i = 0; i < str1.size(); i++)
  {

    freq[str1[i] - 'a']++;
    freq[str2[i] - 'a']--;
  }
  //  checking freq of every char is zero
  for (int i = 0; i < str1.size(); i++)
  {
    if (freq[i] != 0) 
      return false;
  }
  return true;
}
int main()
{
  string str1, str2;
  cin >> str1;
  cout
      << "Next" << endl;
  cin >> str2;
  cout << IsAnagram(str1, str2);

  return 0;
}