#include<bits/stdc++.h>

#define ll long long
#define lli ll int
#define vi vector<int>
#define vs vector<string>
#define vss vector<vs>
#define vc vector<char>
#define vb vector<bool>
#define vii vector<vi>
#define pii pair<int,int>
#define vpii vector<pii>
#define vip vector<pii>
#define ff first
#define ss second
#define rep(i,a,b) for(int i=a;i<b;i++)
const int N = 1e6+3;
const int MOD = 1e9 + 7;

/*
     ***    Saad a Peaceful soul ⭐⭐⭐⭐⭐⭐⭐ 😁 Zindagi me maza Aana Chahye Bs  ***  
*/

using namespace std;
class TrieNode{

     public:
          char data;
          TrieNode * children[26];
          bool isTerminal;
     TrieNode(){}
     TrieNode(char ch){
          data = ch;
          rep( i, 0, 26 ) {
          
               children[i] = '\0';
          }
          isTerminal = 0;
     }
};
class trie{
          TrieNode * root;

     
     void insertUtil(TrieNode * &root,string word){
          
          if(word.length() == 0){
               root->isTerminal = 1;
               return;
          }
          int idx = word[0] - 'a';
          TrieNode * node;
          if(root->children[idx] != '\0'){
               node = root->children[idx];
          } else {
               node = new TrieNode(word[0]);
               root->children[idx] = node;
          }

          insertUtil(node,word.substr(1));
     }
     void eraseUtil(TrieNode* root,string word){
          if(!word.size() ){
               root->isTerminal = false;
               return;
          }
          int idx = word[0] - 'a';
          TrieNode * node;
          if(root->children[idx] != NULL){
               node = root->children[idx];
          } else {
               return;
          }
          eraseUtil(node,word.substr(1));
          delete node;
     }
     
   
     bool searchUtil(TrieNode * &root, string word){

          if(word.size() == 0){
              
               return root->isTerminal;
          }

          int idx = word[0] - 'a';
          TrieNode * node;
          if(root->children[idx] != '\0'){
               node = root->children[idx];
          } else {
               return false;
          }
          return searchUtil(node,word.substr(1));
     }
     public:
     trie(){
          root = new TrieNode('\0');
     }
     void insert(string word){
          insertUtil(root,word);
     }

     bool search( string word){

          return searchUtil(root,word);
     }
     void erase(string word){
          eraseUtil(root,word);
     }
    
};
//Driver Code 
int main(){

     
     trie * t = new trie();
     //trie insertion
     t->insert("coding");
     t->insert("ninjas");
     return 0;
}