#include <bits/stdc++.h>

/*
 *** Saad a Peaceful Soul ***
 */
using namespace std;

class Node
{

public:
     int data;
     Node *left;
     Node *right;
     Node() {}
     Node(int d)
     {
          this->data = d;
          left = right = NULL;
     }
};

Node *buildTree(Node *&root, int data)
{
     if (root == NULL)
     {
          root = new Node(data);
          return root;
     }
     if (data > root->data)
     {
          root->right = buildTree(root->right, data);
     }
     else
     {
          root->left = buildTree(root->left, data);
     }
     return root;
}

void helper(Node *&root)
{

     int data;
     cin >> data;
     while (data != -1)
     {

          root = buildTree(root, data);
          cin >> data;
     }
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

void PostOrderTraversal(Node *&root)
{
     if (root == NULL)
     {
          return;
     }
     PostOrderTraversal(root->left);
     PostOrderTraversal(root->right);
     cout << root->data << " ";
}

void InOrderTraversal(Node *&root)
{
     if (root == NULL)
     {
          return;
     }
     InOrderTraversal(root->left);
     cout << root->data << " ";
     InOrderTraversal(root->right);
}

int maxValBst(Node *&root)
{

     return (root->left == NULL) ? root->data : maxValBst(root->left);
}

int minValBst(Node *&root)
{

     return (root->right == NULL) ? root->data : minValBst(root->right);
}

Node *DelInBst(Node *&root, int x)
{

     if (root == NULL)
          return NULL;

     if (root->data == x)
     {
          // no child
          if (!root->right && !root->left)
          {

               delete root;
               return NULL;
          }
          // 1 child
          // -> left
          if (root->left && !root->right)
          {

               Node *temp = root->left;
               delete root;
               return temp;
          }
          // -> right
          if (!root->left && root->right)
          {

               Node *temp = root->right;
               delete root;
               return temp;
          }
          // 2 child
          if (root->right && root->left)
          {

               int leftOne = maxValBst(root->left);
               root->data = leftOne;
               root->left = DelInBst(root->left, leftOne);
               return root;
          }
     }
     if (x > root->data)
     {

          root->right = DelInBst(root->right, x);
          return root;
     }
     else
     {

          root->left = DelInBst(root->left, x);
          return root;
     }
     // return root;
}
#include <bits/stdc++.h>
class Node
{

public:
     int data;
     Node *left;
     Node *right;
     Node() {}
     Node(int d)
     {
          this->data = d;
          left = right = NULL;
     }
};
Node *buildTree(Node *&root, int data)
{
     if (root == NULL)
     {
          root = new Node(data);
          return root;
     }
     if (data > root->data)
     {
          root->right = buildTree(root->right, data);
     }
     else
     {
          root->left = buildTree(root->left, data);
     }
     return root;
}
bool check(Node *&root)
{

     queue<Node *> q;
     q.push(root);
     while (!q.empty())
     {

          if (q.size() > 1)
               return false;
          Node *temp = q.front();
          q.pop();
          if (temp->left)
          {
               q.push(temp->left);
          }

          if (temp->right)
          {
               q.push(temp->right);
          }
     }
     return true;
}
void inputTreeData(Node *&root, vector<int> &arr, int i, int n)
{

     while (i < n)
     {

          root = buildTree(root, arr[i]);
          i++;
     }
}
bool hasExactlyOneChild(vector<int> &arr, int n)
{
     arr.push_back(-1);
     Node *root = NULL;
     int i = 0;
     inputTreeData(root, arr, i, n);
     bool ans = check(root);
     return ans;
}
int main()
{

     Node *root = NULL;

     helper(root);
     LevelOrderTraversal(root);
     // cout << endl;
     // int del;
     // cin >> del;
     // // queries -> 1.30 , 2.20, 3.90
     // root = DelInBst(root,del);
     // InOrderTraversal(root);
     // cout << endl;
     // PreOrderTraversal(root);
     // cout << endl;
     // PostOrderTraversal(root);
     // cout << endl;
     vector<int> arr;
     int n;
     cin >> n;
     for (int i = 0; i < n; i++)
     {
          int num;
          cin >> num;
          arr.push_back(num);
     }

     hasExactlyOneChild(arr, n);
     return 0;
}