#include <bits/stdc++.h>
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
void InsertAtHead(node *&head, int val)
{
    node *new_node = new node(val);
    new_node->next = head;
    head = new_node;
}
void InsertAtEnd(node *&head, int val)
{
    node *new_node = new node(val);
    node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new_node;
    // new_node->next=NULL; // iski zrwat ni kyuki line no. 12 me constructor jo banaya usme humne new node ke link part ku null  hi de rakha.
}
void InsertAtPosition(node *&head, int val, int idx)
{
    node *new_node = new node(val);
    node *ptr = head;
    for (int i = 0; i < idx - 1; i++)
    {
        ptr = ptr->next;
    }
    new_node->next = ptr->next;
    ptr->next = new_node;
}
void UpdationAtVal(node *&head, int prev_val, int up_val)
{
    node *ptr = head;
    while (ptr->val != prev_val)
    {
        ptr = ptr->next;
    }
    ptr->val = up_val;
}
void display(node *head)

{
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->val << "->";
        ptr = ptr->next;
    }
    cout << "NULL" << endl;
}
void deleteAtHead(node *&head)
{
    node *ptr = head;
    head = head->next;
    free(ptr);
}
void DeleteAtPos(node * &head, int idx)
{
    node *ptr = head;
    node *ptr1 = head;
    if (idx == 0)
    {
        deleteAtHead(head);
        return;
    }
    
        for(int i=0;i<idx-2;i++)
        {
            ptr=ptr->next;
            ptr1=ptr->next;
        }
        ptr->next=ptr->next->next;
        free(ptr1);

            
}

void deleteAtEnd(node*&head)
{
    node*ptr=head;
    node*ptr1=head;
    while(ptr->next!=NULL)
    {   ptr1=ptr;
        ptr=ptr->next;
    }
    ptr1->next=NULL;
    free(ptr);
}
void deleteAlternate( node *& head)
{
    node * current =head;
    node * ptr;
    while(current->next!=NULL&&current!=NULL)
    {
       ptr= current->next;
       current->next=current->next->next;
       free(ptr);
       current=current->next;
    }
}
int main()
{
    node *head = NULL;
    InsertAtHead(head, 30);
    InsertAtHead(head, 20);
    InsertAtHead(head, 10);
    // display(head);
    InsertAtEnd(head, 100);
    display(head);
    InsertAtPosition(head, 14, 2);
    display(head);
    UpdationAtVal(head, 20, 5);
    // display(head);
    // deleteAtHead(head);
    // display(head);
    // deleteAtEnd(head);
    display(head);
    // DeleteAtPos(head,3);
    // display(head);
    deleteAlternate(head);
    cout<<"hello"<<endl;
    display(head);
    return 0;
}