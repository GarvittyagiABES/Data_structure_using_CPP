#include <bits/stdc++.h>
using namespace std;
//  benefit of circular ll over singly and doubly ll is that we can start traverse from any node.
// when we have to traverse LL in circular fashion.
class node
{
public:
  int value;
  node *next;
  node(int data)
  {
    value = data;
    next = NULL;
  }
};
class circular_LL
{
public:
  node *head;
  circular_LL()
  {
    head = NULL;
  }
  void display()
  {
    node *ptr = head;
    do
    {
      std::cout << ptr->value << "->";
      ptr = ptr->next;
    } while (ptr != head);
    std::cout << endl;
  }
  void InsertAtStart(int data)
  {
    node *new_node = new node(data);
    if (head == NULL)
    {
      head = new_node;
      new_node->next = head; // to make it circular
      return;
    }
    node *tail = head;
    while (tail->next != head)
    {
      tail = tail->next;
    }
    // now tail is pointing to the last node of circular LL
    tail->next = new_node;
    new_node->next = head;
    head = new_node;
  }
  void insertAtend(int data)
  {
    if (head == NULL)
    {
      node *new_node = new node(data);
      new_node->next = new_node;
      return;
    }
    node *tail;
    while (tail->next != head)
    {
      tail = tail->next;
    }
    node *new_node = new node(data);
    tail->next = new_node;
    new_node->next = head;
  }
  void deleteAtStart()
  {
    if (head == NULL)
    {
      return;
    }
    node *tail = head;
    while (tail->next != head)
    {
      tail = tail->next;
    }
    tail->next = head->next;
    head->next = NULL;
    free(head);
    head = tail->next;
  }
  void deleteAtEnd()
  {
    if (head == NULL)
    {
      return;
    }
    node *tail = head;
    while (tail->next->next != head)
    {
      tail = tail->next;
    }
    // here tail is pointing to second last node
    node *ptr;
    ptr = tail->next;
    tail->next = head;

    head = tail->next;
    ptr->next = NULL;
    free(ptr);
  }
  // insertion and deletion at k is same as singly_LL
};

int main()
{
  circular_LL cll;
  cll.InsertAtStart(1);
  cll.InsertAtStart(2);
  cll.InsertAtStart(3);
  cll.InsertAtStart(4);
  cll.InsertAtStart(5);
  cll.display();
  cll.deleteAtEnd();
  cll.display();

  return 0;
}