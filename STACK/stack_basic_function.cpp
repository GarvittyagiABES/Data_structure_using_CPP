#include <iostream>
using namespace std;
class minstack
{
public:
    int top;
    int size;
    int *arr;
    minstack(int c)
    {
        size = c;
        top = -1;
          arr = new int[size];
    }
    void push(int data)
    {
        if (top >= size)
        {
            std::cout << "Overflow";
            return;
        }
        top++;
        arr[top] = data;
    }
    void pop()
    {
        top--;
    }
    int get_top()
    {
        return arr[top];
    }
    int get_min()
    {
        if (top == -1)
        { 
           std:: cout << "Stack is empty";
            return -1;
        }
        int min = arr[top];
        for (int i = top - 1; i >= 0; i--)
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
        return min;
    }
};
int main()
{
    minstack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    std::cout << st.get_top() << "\n";
    st.push(4);
    st.push(5);
    st.push(8);
    st.pop();
    st.pop();
    std::cout << st.get_top() << "\n";
    std::cout<<st.get_min()<<endl;

    return 0;
}