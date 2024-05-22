/*travel two types
DFT depth first traversal
a) postorder b)preorder c)inorder
BFT breadth first traversal
a)levelorder b)*/
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <map>
using namespace std;
class node
{
public:
    int val;
    node *left;
    node *right;
    node(int v)
    {
        val = v;
        left = right = NULL;
    }
};
void preordertraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->val << "  ";
    preordertraversal(root->left);
    preordertraversal(root->right);
}
void intraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    intraversal(root->left);
    cout << root->val << "  ";

    intraversal(root->right);
}
void postordertraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postordertraversal(root->left);
    postordertraversal(root->right);
    cout << root->val << "  ";
}
void levelordertraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        int nodesatcurrentlevel = q.size();
        while (nodesatcurrentlevel--)
        {
            node *currnode = q.front();
            q.pop();
            cout << currnode->val << "  ";
            if (currnode->left)
            {
                q.push(currnode->left);
            }
            if (currnode->right)
            {
                q.push(currnode->right);
            }
        }
        cout << endl;
    }
}
int maxdepth(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftdepth = maxdepth(root->left);
    int rightdepth = maxdepth(root->right);
    return max(leftdepth, rightdepth) + 1;
}
int leafnodes(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    
    if(root->left==NULL&&root->right==NULL)
    {
        return 1;
    }
    int leftsubtree= leafnodes(root->left);
    int rightsubtree=leafnodes(root->right);
    return leftsubtree+rightsubtree; 
}
vector<int> seefromtoptobottomfromright(node* root)
{
    //  when you standing right side of tree return the node you can see in a vector
    vector<int> ans;
    if(root==NULL)
    {
        return ans;
    }
     queue<node *> qt;
    qt.push(root);
    while(!qt.empty())
    {
        int nodesatcurrentlevel=qt.size();
        while(nodesatcurrentlevel)
        { 
            node * currnode=qt.front();
            qt.pop();
            if(nodesatcurrentlevel==1)
            {
                ans.push_back(currnode->val);
            }
            if(currnode->left)
            {
                qt.push(currnode->left);
            }
            if(currnode->right)
            {
                qt.push(currnode->right);
            }
            nodesatcurrentlevel--;

        }
    }
    return ans;
   
}
vector<int>TopviewBinaryTree(node * root)
{
   vector<int >ans;  
   if(root==NULL)
   {
    return ans;
   }
   queue<pair<node*,int>>qt;
   qt.push(make_pair(root,0));
   map<int, int> m;
   while(!qt.empty())
   {
    int nodesatcurrlevel=qt.size();
    while(nodesatcurrlevel--)
    {
        pair<node*,int> p=qt.front();
        node* currnode=p.first;
        int currcol=p.second;
        qt.pop();
        if(m.find(currcol )==m.end())
        {
            m[currcol]=currnode->val;
        }
        if(currnode->right)
        {
            qt.push(make_pair(currnode->right,currcol+1));
        }
        if(currnode->left)
        {
            qt.push(make_pair(currnode->left,currcol-1));
        }
    }
   }
   for(auto it:m)
   {
  ans.push_back(it.second);
   }
   return ans;
}

int main()
{
    node *root = new node(2);
    root->left = new node(4);
    root->right = new node(10);
    root->left->left = new node(6);
    root->left->right = new node(5);
    root->right->right = new node(11);
    root->right->right->right = new node(12);
    preordertraversal(root);
    cout << endl;
    intraversal(root);
    cout << endl;
    postordertraversal(root);
    cout << endl;
    levelordertraversal(root);
    cout << endl;
   cout<< maxdepth(root)<<" ";
   cout << endl;
   cout<< leafnodes(root)<<" ";
   cout << endl;
   cout << endl;
   vector<int>Nodes;
   Nodes=seefromtoptobottomfromright(root);
   for(int i=0;i<Nodes.size();i++)
   {
    cout<<Nodes[i]<<"    ";
   }
   cout<<endl;
   vector<int>res=TopviewBinaryTree(root);
   for(auto i:res)
   {
    cout<< i<<"    ";
   }
   cout<<endl;


    return 0;
}