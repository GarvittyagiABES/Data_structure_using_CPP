#include <iostream>
class node
{
public:
  int val;
  node *next;
  node(int data)
  {
    val = data;
    next = NULL;
  }
};
class stack
{
  node *head;
  int capacity;
  int currsize;

public:
  stack(int c)
  {
    capacity = c;
    currsize = 0;
    head = NULL;
  }
  bool isEmpty()
  {
    return head == NULL;
  }
  bool isFull()
  {
    return currsize == capacity;
  }
  void push(int data)
  {
    node *new_node = new node(data);
    if (currsize == capacity)
    {
      std::cout << "Overflow\n";
      return;
    }
    new_node->next = head;
    head = new_node;
    currsize++;
  }
  int get_top()
  {
    if (head == NULL)
    {
      std::cout << "Underflow\n";
      return -1;
    }
    return head->val;
  }
  int pop()
  {
    if (head == NULL)
    {
      std::cout << "Underflow\n";
      return -1;
    }
    node *ptr = head;

    head = head->next;
    ptr->next = NULL;
    int res = ptr->val;
    delete ptr;
    currsize--;
    return res;
  }
};
int main()
{
  stack st(5);
  st.push(1);
  st.push(2);
  st.push(3);
  std::cout << st.get_top() << "\n";
  st.push(4);
  std::cout << st.get_top() << "\n";
  st.push(5);
  std::cout << st.get_top() << "\n";
  st.push(8);
  std::cout << st.get_top() << "\n";
  st.pop();
  std::cout << st.get_top() << "\n";
  st.pop();
  std::cout << st.get_top() << "\n";
  

  return 0;
}