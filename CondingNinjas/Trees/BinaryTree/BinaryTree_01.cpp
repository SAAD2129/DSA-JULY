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

void BuildTree(Node *&root)
{
     int data;
     cin >> data;
     if (data == -1)
          return;
     root = new Node(data);

     BuildTree(root->left);
     // root->left = BuildTree(root->left);
     // root->right = BuildTree(root->right);
     BuildTree(root->right);
     // return root;
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
void PostOrderTraversal(Node *&root){
     
     if (root == NULL){
          return;
     }

     PostOrderTraversal(root->left);
     PostOrderTraversal(root->right);
     cout << root->data << " ";
}
void PreOrderTraversal(Node *&root){
     if (root == NULL){
          return;
     }
     cout << root->data << " ";
     PreOrderTraversal(root->left);
     PreOrderTraversal(root->right);
}
void LevelOrderTraversal(Node *&root){
          queue<Node *> q;
          q.push(root);
          q.push(NULL);
          while (!q.empty()){

                    Node *temp = q.front();
                    q.pop();

                    if (temp == NULL){
                         cout << endl;
                         if (!q.empty()){
                              q.push(NULL);
                         }
                    }

                    else{
                         cout << temp->data << " ";
                         if (temp->left){
                              q.push(temp->left);
                         }

                         if (temp->right){
                              q.push(temp->right);
                         }
                    }
          }
}

void buildFromLevelOrder(Node * &root){

          queue<Node*> q;

          //data for root node
          int data;
          cin >> data;

          // creating root node
          root = new Node(data);
          q.push(root);

          while (!q.empty()){

                    Node * temp = q.front();
                    q.pop();

                    //for left node
                    cin >> data;
                    if(data != -1)
                    {
                         temp->left = new Node(data);
                         q.push(temp->left);
                    }
                    
                    //for right node
                    cin >> data;
                    if(data != -1)
                    {
                         temp->right = new Node(data);
                         q.push(temp->right);
                    }
          }

}

//Level order traversal using iterations
void PrintInOrder(Node *&root){

          queue<Node *> q;
          while (!q.empty()){
               

          }
          
          
}

int main()
{
     Node *root = NULL;
     // Building Tree
     buildFromLevelOrder(root);
     // BuildTree(root);

     string s;
     //Traversal
     // cout << "InOrderTraversal: ";
     // InOrderTraversal(root);
     // cout << endl;

     // cout << "PostOrderTraversal: ";
     // PostOrderTraversal(root);
     // cout << endl;

     // cout << "PreOrderTraversal: ";
     // PreOrderTraversal(root);
     // cout << endl;

     cout << "LevelOrderTraversal: " << endl;
     LevelOrderTraversal(root);
     cout << endl;

     return 0;
}

/*      1
      /    \
    2        3

 -1 -1   -1  -1 */