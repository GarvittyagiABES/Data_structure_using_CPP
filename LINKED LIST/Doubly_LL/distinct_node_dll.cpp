#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node *prev;
    node(int data)
    {
        val = data;
        next = NULL;
        prev = NULL;
    }
};
class doubly_LL
{
public:
    node *head;
    node *tail;
    doubly_LL()
    {
        head = NULL;
        tail = NULL;
    }
    void insertAtStart(int data)
    {
        node *new_node = new node(data);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
        return;
    }
    void insertAtLast(int data)
    {
        node *new_node = new node(data);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = tail->next;
        return;
    }
    void display()
    {
        node *ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->val << "<->";
            ptr = ptr->next;
        }
        cout << "NULL" << endl;
    }
};
vector<int>pair_of_distinct_nodes(node *head,node*tail,int x)
{
    vector<int>ans(2,-1);
    while(head!=tail)
    {
        int sum=head->val+tail->val;
        if(sum==x)
        {
            ans[0]=head->val;
            ans[1]=tail->val;
            return ans;
        }
        if(sum>x)
        {
            tail=tail->prev;
        }
        else{
            head=head->next;
        }
    }
    return ans;
}
int main()
{
    doubly_LL dll;
    int x;
    cout<<"Enter x: ";
    cin>>x;
    dll.insertAtLast(2);
    dll.insertAtLast(5);
    dll.insertAtLast(6);
    dll.insertAtLast(8);
    dll.insertAtLast(10);
    vector<int>ans=pair_of_distinct_nodes(dll.head,dll.tail,x);
    cout<<ans[0]<<" and "<<ans[1];
    return 0;
}