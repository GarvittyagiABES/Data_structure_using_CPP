#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
// stack<datatype>stack_name;
  stack<int> st;
  st.push(1);
  st.push(2);
  st.push(3);
  std::cout << st.top() << "\n";
  st.push(4);
  std::cout << st.top() << "\n";
  st.push(5);
  std::cout << st.top() << "\n";
  st.push(8);
  std::cout << st.top() << "\n";
  st.pop();
  std::cout << st.top() << "\n";
  st.pop();
  std::cout << st.top() << "\n";
  st.pop();
  st.pop();
  st.pop();
  st.pop();
  std::cout << st.top() << "\n";
  
return 0;
}