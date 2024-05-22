#include <bits/stdc++.h>
#include <algorithm>
#include <stack>
using namespace std;
vector<int> next_greater_element(vector<int> input)
{
    // std::cout << "Here starting" << endl;
    int i = 1;
    int n = input.size();
    vector<int> output(n, -1);
    stack<int> st;
    st.push(0);
    // std::cout << "Here outloop" << endl;
    while (i < n)
    {
        // std::cout << "Here out inner loop" << endl;
        while (!st.empty() and input[i] > input[st.top()])
        {
            // std::cout << "Doing inner while" << endl;
            output[st.top()] = input[i];
            st.pop();
        }
        // std::cout << "Here out done  inner loop" << endl;

        st.push(i);

        i++;
    }
    // std::cout << "All  done" << endl;
    return output;
}
int main()
{
    int n;
    std::cin >> n;
    vector<int> v;
    while (n--)
    {
        int x;
        std::cin >> x;
        v.push_back(x);
    }
    vector<int> res = next_greater_element(v);
    int i = 0;
    while (i < res.size())
    {
        std::cout << res[i] << " ";
        i++;
    }



    

    return 0;
}