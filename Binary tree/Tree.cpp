/* It is a non linear data sturcture it store hierarchical data
   Element are stored at diffrent levels
   Elements are called nodes which are connected together to represent hierarchy.
   Top most node called root node bottom one called leaves.
   child node, parent node,sibling node,leaf nodes,
   Types of tree
   1. Generic tree
     a node can have any no. of childnode
   2. Binary tree
    a node can have max two children expect root node
   3. Binary Search Tree
    a binary tree in which all node in left subtree have value less than root node value and all node in right subtree have value more than root node value
  4. AVL Tree
    self balancing tree
    difference between right left subtree can be only 0,1,-1

 */
#include <iostream>
#include <algorithm>
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
int main()
{
  node *root = new node(10);
  root->left = new node(5);
  root->right = new node(15);
  cout << "Root node: " << root->val << endl;
  cout << "left child: " << root->left->val << "      ";
  cout << "Right child: " << root->right->val;

  return 0;
}
