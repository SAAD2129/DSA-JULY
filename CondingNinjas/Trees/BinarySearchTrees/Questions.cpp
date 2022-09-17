#include<bits/stdc++.h>

/*
       *** Saad a Peaceful Soul ***
*/
using namespace std;

class Node{

public:
     int data;
     Node * left;
     Node * right;
     Node(){}
     Node(int d)
     {
          this->data= d;
          left = right = NULL;
     }
};

Node * buildTree(Node * &root, int data)
{
     if(root == NULL){
          root = new Node(data);
          return root;
     }
     if(data > root->data){
          root->right = buildTree(root->right,data);
     }
     else{
         root->left = buildTree(root->left,data);
     }
     return root;
}

void inputTreeData(Node *&root){

     int data;
     cin >> data;
     while (data != -1){

          root  = buildTree(root, data);
          cin >> data; 
     }
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

void PreOrderTraversal(Node *&root){
     if (root == NULL){
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

//as function named gives a maximum value from bst
int maxValBst(Node *&root){
     
     return (root->left == NULL) ? root->data:maxValBst(root->left);
}

//as function named gives a minimum value from bst
int minValBst(Node *&root){
     
     return (root->right == NULL) ? root->data:minValBst(root->right);
}

//lca of two now least common ancesstor
Node * lca(Node*&root,Node*&P,Node*&Q){

     if (root == NULL)
          return NULL;
     
     if (root->data > P->data && root->data > Q->data)
          return lca(root->left,P,Q);
     else if (root->data > P->data && root->data > Q->data){
          return lca(root->right,P,Q);
     }
     return root;
}

//is a valid bst or not
bool BST(Node* root,int min,int max){

     if(root == NULL)
          return true;
     if(root->data >= min && root->data < max){
          bool left = BST(root->left,min,root->data);
          bool right = BST(root->right,root->data,max);
          return (left && right);
     }
    return false;
}

bool validateBST(Node* root) 
{
     return BST(root,INT_MIN,INT_MAX);
}

pair<int,int> PredSucc(Node*root,int key){

     if(root == NULL)
          return {-1,-1};
     
     int pred = -1;
     int succ = -1;
     while (root->data != key){

          if(key > root->data){
               succ = root->data;
               root = root->right;
          }
          else{
               pred = root->data;
               root = root->left;
          }
     }
     Node * left = root->left;
     Node * right= root->right;

     while (left !=NULL){
          pred = root->data;
          left = left->right;
     }

     while (right !=NULL){
          pred = root->data;
          right = right->left;
     }
     
     return {pred,succ};
     
}


void InOrderTraversal(Node  *&root,vector<int>&temp)
{
     if (root == NULL)
     {
          return;
     }
     InOrderTraversal(root->left,temp);
     temp.push_back(root->data);
     InOrderTraversal(root->right,temp);
}

bool pairSumBst(Node *root, int k){
     
     vector<int> temp;
     InOrderTraversal(root,temp);
     int i=0,j= temp.size()-1;

     while(i<j){
      int sum = temp[i] + temp[j];
        if(sum == k)
            return true;
        else if(sum < k){
            i++;
        }
        else{
            j--;
        }
     }
    return false;
}

int main(){

     Node * root =NULL;

     inputTreeData(root);
     LevelOrderTraversal(root);
     cout << endl;
     return 0;
}
