#include <iostream>
using namespace std;
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
class LinkedList
{
public:
    node *head;
    LinkedList()
    {
        head = NULL;
    }
    void insert(int data)
    {
        node *new_node = new node(data);

        if (head == NULL)
        {
            head = new_node;
            return;
        }
        node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new_node;
    }
    void display()
    {
        node *ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->val << "->";
            ptr = ptr->next;
        }
        cout << "NULL" << endl;
    }
};
bool Is_cycle(node *head)
{
    node *slow = head;
    node *fast = head;
    if (head == NULL)
    {
        return false;
    }
    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}
void removeCycle(node *&head)
{

    node *slow = head;
    node *fast = head;
    if (head == NULL)
    {
        return;
    }
    if (Is_cycle(head))
    {

        while (fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
            if (slow == fast)
            {
                break;
            }
        }
        fast = head;
        while (slow->next != fast->next)
        {
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = NULL;
    }
    else
    {
        return;
    }
}
node *middle_node_of_LL(node *head)
{
    node *slow = head;
    node *fast = head;
    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
node* Reversing_ll(node *&head)
{
    node *prev = NULL;
    node *current = head;
    node *next;
    // cout<<"in reversing ll"<<endl;
    while (current)
    {
        next = current->next;
        current->next = prev;
       
        prev = current;
        current =next ;
    }
    head = prev;
    return head;
}
bool Is_Pallindrome(node *head)
{    node *middle_node=middle_node_of_LL(head);
    node *head2=Reversing_ll(middle_node);
    while(head2)
    {
        if(head->val!=head2->val)
        {
            return false;
        }
        else
        {
            head=head->next;
            head2=head2->next;
        }
    }
    return true;
}

int main()
{
    LinkedList ll;
    ll.insert(1);
    ll.insert(2);
    ll.insert(3);
    ll.insert(4);
    ll.insert(5);
    ll.insert(5);
    ll.insert(4);
    ll.insert(3);
    ll.insert(2);
    ll.insert(1);
    ll.display();
    if(Is_Pallindrome(ll.head))
    {
        cout<<"Yes,LL is pallindrome\n";
    }
    else{
        cout<<"No,not pallindrome";
    }

    return 0;
}