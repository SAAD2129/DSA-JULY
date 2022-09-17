#include<bits/stdc++.h>

#define ll long long
#define lli ll int
#define vi vector<int>
#define vs vector<string>
#define vss vector<vs>
#define vc vector<char>
#define vii vector<vi>
#define pii pair<int,int>
#define vip vector<pii>
#define ff first
#define ss second
#define rep(i,a,b) for(int i=a;i<n;i++)
const int N = 1e6+3;
const int MOD = 1e9 + 7;

/*
     Saad a Peaceful soul 
*/

using namespace std;

class Node{
    public:
    int data;
    Node * left;
    Node * right;

     Node(int dat){
          this->data = dat;
          left = NULL;
          right = NULL;
     }
     ~Node(){
          if(left){
               cout << "Deleted " << left->data << endl;
               delete left;
          }
          if(right){
               cout << "Deleted " << right->data << endl;
               delete right;
          }
     }
};
Node * ConstructBst(int pre[],int n,int maxi,int mini,int key,int &idx){

     Node * root = NULL;
     if(idx >= n)
          return NULL;
     
     if(key > mini && key < maxi){
          root = new Node(key);
          idx++;
          if(idx < n){
               //Andhe ho kya code likhne aaye ho to tum
               root->left = ConstructBst(pre,n,root->data,mini,pre[idx],idx);
          }
          if(idx < n){
               root->right = ConstructBst(pre,n,maxi,root->data,pre[idx],idx);
          }
     }
     return root;
}
void InOrderTraversal(Node *&root)
{
     if (root == NULL)
     {
          return;
     }
     cout << root->data << " ";
     InOrderTraversal(root->left);
     InOrderTraversal(root->right);
}

bool isBst(Node *&root){

     if(!root) return 1;
     
     bool left = isBst(root->left);
     bool right = isBst(root->right);
     bool condi = root->data > root->left->data && root->right->data > root->data;

     if(left && right && condi)
          return 1;
     return 0;
}
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

void VerticalTraversal(Node *&root,int hdis,map<int,vi> &m){
     if(!root) return;
     m[hdis].push_back((root->data));
     VerticalTraversal(root->left,hdis-1,m);
     VerticalTraversal(root->right,hdis+1,m);
}
int main(){

     int pre[] = {10,2,1,13,12};
     int idx = 0, n= 5;
     // Node * root = ConstructBst(pre,n,INT_MAX,INT_MIN,pre[0],idx);
     Node * root = NULL;

     BuildTree(root);
     // InOrderTraversal(root);
     vi ans;
     int hdis = 0;
     map<int,vi > mp;
     VerticalTraversal(root,hdis,mp);
     for(auto i : mp){
          for(auto j : i.second){
               cout << j << " ";
          } cout << endl;
     }cout << endl;

/*
     10
     / \
    2   13
  /     /
 1     12


*/

     return 0;

}