#include <bits/stdc++.h>
#include <algorithm>
#include <stack>
using namespace std;
vector<int> stock_span(vector<int> input)
{
    int i = 1;
    reverse(input.begin(), input.end());
    int n = input.size();
    vector<int> output(n, -1);
    stack<int> st;
    st.push(0);
    while (i < n)
    {
        while (!st.empty() and input[i] > input[st.top()])
        {
            output[st.top()] = n-i-1;  // after reversing index will change so we store changed index  
            st.pop();
        }

        st.push(i);

        i++;
    }
    
    reverse(output.begin(), output.end());
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
    vector<int> res = stock_span(v);
    std::cout << "Function done" << endl;
    int i = 0;
    while (i < res.size())
    {
        std::cout << i-res[i] << " ";
        i++;
    }

    return 0;
}