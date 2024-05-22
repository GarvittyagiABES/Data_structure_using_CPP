#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
int histogram(vector<int> input)
{
    int i = 1;
    int n = input.size();
    vector<int> output(n, -1);
    stack<int> st;
    st.push(0);
    int ans = -9876;
    while (i < n)
    {
        while (!st.empty() and input[i] < input[st.top()])
        {
            int ele = input[st.top()];
            st.pop();
            int nsi = i;
            int psi = (st.empty() ? -1 : st.top());
            ans = max(ans, ele * (nsi - psi - 1));
        }
        st.push(i);
    }

        while (!st.empty())
        {
            int ele = input[st.top()];
              st.pop();
            int nsi = n;
            int psi = (st.empty() ? (-1) : st.top());
            ans = max(ans, ele * (nsi - psi - 1));
          
        }

        i++;
    
    return ans;
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
    std::cout << "Maximum area of histogram is: " << histogram(v);

    return 0;
}