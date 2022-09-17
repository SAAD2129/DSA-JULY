#include <bits/stdc++.h>

/****** SAAD A PEACEFUL SOUL ******/

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

void BuildTree(Node *&root)
{
     int data;
     cin >> data;
     if (data == -1)
          return;
     root = new Node(data);

     BuildTree(root->left);
     BuildTree(root->right);
}

// Problem no1 find height of tree                           Difficulty level medium

int Height(Node *&root)
{

     // base case
     if (root == NULL)
     {

          return 0;
     }
     // processing
     int left = Height(root->left);
     int right = Height(root->right);
     int ans = max(left, right) + 1;

     return ans;
}

// diameter of binary tree                                   Difficulty level medium
/*
diameter is also called width of tree is the number of nodes on the longest path between two end nodes
 */
// Problem no2
int diameter(Node *&root)
{

     if (root == NULL)
          return 0;

     int op1 = diameter(root->left);
     int op2 = diameter(root->right);
     int op3 = Height(root->left) + 1 + Height(root->right);
     int ans = max(op1, max(op2, op3));
     return ans;
}

// Check for balanced tree
//  problem statement
/*
find if it's height is balanced if d/f b/w hl - hr <= 1

*/

// Problem no3
// pair<bool, int> solveBalanced(Node *&root)
// {

//      if (root == NULL)
//           return make_pair(true, 0);

//      pair<bool, int> left = solveBalanced(root->left);
//      pair<bool, int> right = solveBalanced(root->right);
// }
// bool isBalanced(Node *&root)
// {
// }

// check if two tree are identical
/*
check if all nodes are equal return true otherwise false
*/
// done
//  Problem no4
bool isIdentical(Node *&r1, Node *&r2)
{

     if (r1 == NULL && r2 == NULL)
          return true;

     if (r1 != NULL && r2 == NULL)
          return false;

     if (r1 == NULL && r2 != NULL)
          return false;

     bool left = isIdentical(r1->left, r2->left);
     bool right = isIdentical(r1->right, r2->right);

     if (left && right && r1->data == r2->data)
          return true;
     return false;
     // 1 2 3 //1 2 3 T
     // 1 2 3 //1 3 2 F
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
void buildFromLevelOrder(Node *&root)
{

     queue<Node *> q;

     // data for root node
     int data;
     cin >> data;

     // creating root node
     root = new Node(data);
     q.push(root);

     while (!q.empty())
     {

          Node *temp = q.front();
          q.pop();

          // for left node
          cin >> data;
          if (data != -1)
          {
               temp->left = new Node(data);
               q.push(temp->left);
          }

          // for right node
          cin >> data;
          if (data != -1)
          {
               temp->right = new Node(data);
               q.push(temp->right);
          }
     }
}
/*
   3
 /   \
1     2
*/
// Problem no6

pair<bool, int> isSum(Node *root)
{

     if (root == NULL)
     {
          return make_pair(true, 0);
     }
     if (root->left == NULL && root->right == NULL)
     {
          return make_pair(true, root->data);
     }

     pair<bool, int> leftAns = isSum(root->left);   // T 1
     pair<bool, int> rightAns = isSum(root->right); // T 2

     bool left = leftAns.first;
     bool right = rightAns.first;
     bool condition = root->data == (leftAns.second + rightAns.second);
     pair<int, int> ans;
     if (left && right && condition)
     {
          ans.first = true;
          ans.second = 2 * root->data;
     }
     else
     {
          ans.first = false;
     }
     return ans;
}
// Problem no7
void ZigZagTraverse(Node *&root, vector<int> &ans)
{

     queue<Node *> q;
     q.push(root);
     bool leftToRight = true;

     while (!q.empty())
     {

          int size = q.size();
          vector<int> helper(size);

          for (int i = 0; i < size; i++)
          {

               Node *front = q.front();
               q.pop();

               int idx = leftToRight ? i : size - i - 1;
               helper[idx] = front->data;

               if (front->left)
                    q.push(front->left);

               if (front->right)
                    q.push(front->right);
          }
          leftToRight = !leftToRight;

          for (auto i : helper)
               ans.push_back(i);
     }
}
// Problem no8
// outer most nodes
void left(Node *root, vector<int> &ans)
{
     if (root == NULL)
          return;
     ans.push_back(root->data);
     if (root->left)
          left(root->left, ans);
     else
     {
          left(root->right, ans);
     }
}
void right(Node *root, vector<int> &ans)
{
     if (root == NULL)
          return;
     if (root->left == NULL && root->right == NULL)
     {
          return;
     }
     if (root->right)
          right(root->right, ans);
     else
     {
          right(root->left, ans);
     }
     ans.push_back(root->data);
}
void leaf(Node *root, vector<int> &ans)
{
     if (root == NULL)
          return;
     if (root->left == NULL && root->right == NULL)
     {
          ans.push_back(root->data);
     }
     leaf(root->left, ans);
     leaf(root->right, ans);
}
vector<int> traverseBoundary(Node *root)
{

     vector<int> ans;
     if (root == NULL)
          return ans;
     if (root->left == NULL && root->right == NULL)
     {
          ans.push_back(root->data);
          return ans;
     }
     ans.push_back(root->data);
     if (root->left)
     {
          left(root->left, ans);
          ans.pop_back();
     }
     leaf(root, ans);
     if (root->right)
     {
          right(root->right, ans);
     }

     return ans;
}
// Problem no9
vector<int> VerticalTraverse(Node *&root)
{

     map<int, map<int, vector<int>>> nodes;
     queue<pair<Node *, pair<int, int>>> q;
     vector<int> ans;
     if (root == NULL)
          return ans;

     q.push(make_pair(root, make_pair(0, 0)));
     while (!q.empty())
     {
          pair<Node *, pair<int, int>> temp = q.front();
          q.pop();
          Node *front = temp.first;
          int hd = temp.second.first;
          int level = temp.second.second;
          nodes[hd][level].push_back(front->data);
          if (front->left)
               q.push(make_pair(front->left, make_pair(hd - 1, level + 1)));
          if (front->right)
               q.push(make_pair(front->right, make_pair(hd + 1, level + 1)));

          for (auto i : nodes)
          {

               for (auto j : i.second)
               {

                    for (auto k : j.second)
                    {

                         ans.push_back(k);
                    }
               }
          }
     }
     return ans;
}

// Problem no10
void TopViewTraverse(Node *&root)
{

     map<int, int> topNode;
     queue<pair<Node *, int>> q;
     vector<int> ans;
     if (root == NULL)
          return;

     q.push(make_pair(root, 0));
     while (!q.empty())
     {
          pair<Node *, int> temp = q.front();
          q.pop();

          Node *front = temp.first;
          int hd = temp.second;
          // nodes[hd][level].push_back(front->data);
          if (topNode.find(hd) == topNode.end())
               topNode[hd] = front->data;

          if (front->left)
               q.push(make_pair(front->left, hd - 1));
          if (front->right)
               q.push(make_pair(front->right, hd + 1));

          for (auto i : topNode)
          {

               ans.push_back(i.second);
          }
     }
}

// Problem no11
void BottomViewTraverse(Node *&root)
{

     map<int, int> topNode;
     queue<pair<Node *, int>> q;
     vector<int> ans;
     if (root == NULL)
          return;

     q.push(make_pair(root, 0));
     while (!q.empty())
     {
          pair<Node *, int> temp = q.front();
          q.pop();

          Node *front = temp.first;
          int hd = temp.second;
          topNode[hd] = front->data;

          if (front->left)
               q.push(make_pair(front->left, hd - 1));
          if (front->right)
               q.push(make_pair(front->right, hd + 1));

          for (auto i : topNode)
          {

               ans.push_back(i.second);
          }
     }
}
// Problem no12
void LeftViewTraverse(Node *&root, vector<int> &ans, int level)
{

     if (root == NULL)
          return;

     if (level == ans.size())
          ans.push_back(root->data);

     LeftViewTraverse(root->left, ans, level + 1);
     LeftViewTraverse(root->right, ans, level + 1);
}
// Problem no13
void RightViewTraverse(Node *&root, vector<int> &ans, int level)
{

     if (root == NULL)
          return;

     if (level == ans.size())
          ans.push_back(root->data);

     RightViewTraverse(root->right, ans, level + 1);
     RightViewTraverse(root->left, ans, level + 1);
}
// Problem no14
// done tc = O(h)
void sumofLongLeafNode(Node *&root, pair<int, int> &ans, pair<int, int> &temp)
{

     if (root == NULL)
     {
          if (temp.second > ans.second)
          {
               ans.second = temp.second;
               ans.first = temp.first;
          }
          else if (temp.second == ans.second)
          {
               ans.first = max(temp.first, ans.first);
          }
          return;
     }
     temp.first += root->data;
     temp.second += 1;
     sumofLongLeafNode(root->left, ans, temp);
     sumofLongLeafNode(root->right, ans, temp);
     temp.first -= root->data;
     temp.second -= 1;
}
// Problem no15
// done sc = O(h) tc = O(n)
Node *lca(Node *&root, int n1, int n2)
{

     if (root == NULL)
          return root;
     if (root->data == n1 || root->data == n2)
          return root;

     Node *leftAns = lca(root->left, n1, n2);
     Node *rightAns = lca(root->right, n1, n2);

     if (leftAns != NULL && rightAns != NULL)
          return root;
     else if (leftAns != NULL && rightAns == NULL)
          return leftAns;
     else if (leftAns == NULL && rightAns != NULL)
          return rightAns;
     else
          return NULL;
}

// Problem no16
Node *kthAncesstor(Node *&root, int n, int k)
{

     if (root == NULL)
          return root;

     if (root->data == n)
          return root;

     Node *leftAns = kthAncesstor(root->left, n, k);
     Node *rightAns = kthAncesstor(root->right, n, k);

     if (leftAns != NULL && rightAns == NULL)
     {
          k--;
          if (k <= 0)
          {
               k = INT_MAX;
               return root;
          }
          return leftAns;
     }
     if (leftAns == NULL && rightAns != NULL)
     {
          k--;
          if (k <= 0)
          {
               k = INT_MAX;
               return root;
          }
          return rightAns;
     }
     return NULL;
}

// Problem no17
void sumK(Node *&root, int &count, int k, vector<int> path)
{

     if (root == NULL)
          return;

     path.push_back(root->data);

     // left
     sumK(root->left, count, k, path);

     // right
     sumK(root->left, count, k, path);

     int length = path.size();
     int sum = 0;
     for (int i = length - 1; i >= 0; i--)
     {
          sum += path[i];
          if (sum == k)
          {
               count++;
          }
     }
     path.pop_back();
}

// Problem no18
pair<int, int> getMaxSum(Node *root)
{

     if (root == NULL)
          return make_pair(0, 0);
     pair<int, int> left = getMaxSum(root->left);
     pair<int, int> right = getMaxSum(root->right);
     pair<int, int> ans;
     ans.first = root->data + left.second + right.second;
     ans.second = max(left.first, left.second) + max(right.first, right.second);
     return ans;
}
int main()
{

     cout << "***************************************************\n\n";

     Node *root;
     BuildTree(root);
     LevelOrderTraversal(root);
     cout << endl;
     // traverseBoundary(root);
     cout << "\n\n***************************************************";

     return 0;
}