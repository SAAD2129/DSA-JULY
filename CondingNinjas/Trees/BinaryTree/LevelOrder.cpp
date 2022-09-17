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

void LevelOrderTraversal(Node *&root)
{
     queue<Node *> q;
     q.push(root);
     q.push(NULL);
     while (!q.empty())
     {
          Node *temp = q.front();
          q.pop();

          if (temp == NULL)
          {
               cout << endl;
               if (!q.empty())
               {
                    q.push(NULL);
               }
          }
          else
          {
               cout << temp->data << " ";
               if (temp->left)
               {
                    q.push(temp->left);
               }

               if (temp->right)
               {
                    q.push(temp->right);
               }
          }
     }
}
int main()
{

     Node *root = NULL;

     root = BuildTree(root);
     // LevelOrderTraversal(root);
     return 0;
}
/*      1
      /    \
    2        3

 -1 -1   -1  -1 */