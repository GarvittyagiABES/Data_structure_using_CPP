#include <iostream>
// #include <stack> // include  this only when we want to use cpp inbuild stack
using namespace std;
class stack
{
    int capacity;
    int *arr;
    int top;

public:
    stack(int c)
    {
        this->capacity = c;
        arr = new int(c);
        this->top = -1;
    }
    void push(int data)
    {
        if (this->top == this->capacity - 1)
        {
            std::cout << "Stack is full" << endl;
            exit(0);
        }
        this->top++;
        this->arr[this->top] = data;
    }
    void pop()
    {
        if (this->top == -1)
        {
            std::cout << "Underflow\n";
            return;
        }
        this->top--;
    }
    int get_top()
    {
        if (this->top == -1)
        {
            std::cout << "Underflow\n";
            return -1;
        }
        return this->arr[this->top];
    }
    bool isempty()
    {
        return this->top == -1;
    }
    bool isfull()
    {
        return this->top == this->capacity - 1;
    }
};
int main()
{
     stack st(5);
     st.push(1);
     st.push(2);
     st.push(3);
    std:: cout<<st.get_top()<<"\n";
     st.push(4);
     st.push(5);
    std:: cout<<st.get_top()<<"\n";
    st.push(8);
    st.pop();
    std::cout<<"completed"<<endl;
    st.pop();
    std::cout<<"completed2"<<endl;
    std:: cout<<st.get_top()<<"\n";



    return 0;
}