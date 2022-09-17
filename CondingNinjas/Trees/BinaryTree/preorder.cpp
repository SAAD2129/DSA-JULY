#include <bits/stdc++.h>

/*
 *** Saad a Peaceful Soul ***
 */
using namespace std;
class Node
{
public:
     int data;
     Node *right;
     Node *left;
     Node() {}
     Node(int d)
     {
          this->data = d;
          this->left = NULL;
          this->right = NULL;
     }
};

Node *BuildTree(Node *&root)
{
     int data;
     cin >> data;
     if (data == -1)
          return NULL;
     root = new Node(data);

     root->left = BuildTree(root->left);
     root->right = BuildTree(root->right);
     return root;
}
void PreOrderTraversal(Node *&root)
{
     if (root == NULL)
     {
          return;
     }
     cout << root->data << " ";
     PreOrderTraversal(root->left);
     PreOrderTraversal(root->right);
}
int main()
{

     Node *root = NULL;

     root = BuildTree(root);
     PreOrderTraversal(root);
     return 0;
}
/*      1
      /    \
    2        3

 -1 -1   -1  -1 */