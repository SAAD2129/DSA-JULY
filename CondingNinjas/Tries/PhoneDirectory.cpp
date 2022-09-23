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
          
               children[i] = NULL;
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
          if(root->children[idx] != NULL){
               node = root->children[idx];
          } else {
               node = new TrieNode(word[0]);
               root->children[idx] = node;
          }

          insertUtil(node,word.substr(1));
     }
     bool searchUtil(TrieNode * &root, string word){

          if(word.size() == 0){
              
               return root->isTerminal;
          }

          int idx = word[0] - 'a';
          TrieNode * node;
          if(root->children[idx] != NULL){
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
     void printSuggestions(TrieNode * curr,vs &temp, string prefix){
          if(curr->isTerminal)
               temp.push_back(prefix);
          
          for (char ch = 'a'; ch <= 'z'; ch++){
               
               TrieNode * next = curr->children[ch - 'a'];
               if(next){
                    prefix.push_back(ch);
                    printSuggestions(next,temp,prefix);
                    prefix.pop_back();
               }
          }
     }
     vss getSuggestions(string query){

          vss ans;
          string prefix = "";
          TrieNode * prev = root;
          for (int i = 0; i < query.size(); i++){
               
               char lastch = query[i];
               TrieNode * curr = prev->children[lastch - 'a'];
               if(!curr)
                    break;
               
               prefix.push_back(lastch);
               vs temp;
               printSuggestions(curr,temp,prefix);
               ans.push_back(temp);
               temp.clear();
               prev = curr;
          }

          return ans;
          
     }
};

//Driver Code 
int main(){

     int n;
     cin >> n;
     vs cl(n);

     trie *t = new trie();
     rep( i, 0, n ){
          cin >> cl[i];
          t->insert(cl[i]);
     }
     
     string query;
     cin >> query;
     
     vss ans = t->getSuggestions(query);
     
     int sz = ans.size();
     for (int i = 0; i < sz; i++){
          for (int j = 0; j < ans[i].size(); j++){
               cout << ans [i][j] << " ";
          } cout << endl;
     }
     
          
     //test cases
     /* 
     2
     5
     cod coding codding code coly
     coding
     2
     ninjas coding
     ninja */

     return 0;
}