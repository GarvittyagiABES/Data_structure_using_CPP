 #include<iostream>
 #include<stack>
 #include<string>
 #include<algorithm>
 using namespace std;
 string pre_to_post(string &str)
 {
    string res;
    stack<string>st;
    reverse(str.begin(),str.end());
    for(int i=0;i<str.size();i++)
    {
        if(isdigit(str[i]))
        {
            st.push(to_string(str[i]-'0'));

        }
        else
        {
            string a=st.top();
            st.pop();
            string b=st.top();
            st.pop();
            string newexp=a+b+str[i];
            st.push(newexp);
        }
    }
    return st.top();
       

 }
 int main()
 {
    string str="*+31-15";
    std::cout<<pre_to_post(str)<<endl;
 
 return 0;
 }