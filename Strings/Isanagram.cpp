#include <bits/stdc++.h>
using namespace std;
bool Isanagram(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }
    vector<int> freq(26, 0);
    for (int i = 0; i < s1.size(); i++)
    {
        freq[s1[i] - 'a']++;
        freq[s2[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s1, s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;
    if (Isanagram(s1, s2))
    {
        cout << "String are anagram ";
    }
    else
    {
        cout << "String are  not anagram ";
    }
    return 0;
}