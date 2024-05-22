#include <bits/stdc++.h>
using namespace std;
string LongestCommonPrefix(vector<string> vec)
{
    sort(vec.begin(), vec.end());
    string s1, s2, ans;
    s1 = vec[0];
    s2 = vec[vec.size() - 1];
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == s2[i])
        {
            ans += s1[i];
        }
        else
        {
            break;
        }
    }
    return ans;
}
string LongestCommonPrefixmethod2(vector<string>vec)
{
    string s1=vec[0];
    int ans_length=s1.size();
    for(int i=1;i<vec.size();i++)
    {
        int j=0;
        while(j<s1.size()&&j<vec[i].size()&&s1[j]==vec[i][j])
        {
            j++;
            ans_length=min(ans_length,j);
        }
    }
    cout<<ans_length<<endl;
    
    string ans= s1.substr(0,ans_length);
  return ans;
}
int main()
{
    int n;
    cout << "Enter the number of string: ";
    cin >> n;

    vector<string> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    cout << "Longest common prefix is: " << LongestCommonPrefix(vec)<<endl;
    cout << "Longest common prefix is: " << LongestCommonPrefixmethod2(vec);
    return 0;
}