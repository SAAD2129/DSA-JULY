// #include<bits/stdc++.h>

// #define ll long long
// #define lli ll int
// #define vi vector<int>
// #define vs vector<string>
// #define vss vector<vs>
// #define vc vector<char>
// #define vb vector<bool>
// #define vii vector<vi>
// #define pii pair<int,int>
// #define vpii vector<pii>
// #define vip vector<pii>
// #define ff first
// #define ss second
// #define rep(i,a,b) for(int i=a;i<b;i++)
// #define SetBits(a) __builtin_popcount(a)
// #define SetBitsll(a) __builtin_popcountll(a)
// const int N = 1e6+3;
// const int MOD = 1e9 + 7;

// /*
//      ***    Saad a Peaceful soul ⭐⭐⭐⭐⭐⭐⭐ 😁 Zindagi me maza Aana Chahye Bs  ***  
// */

// using namespace std;

// void PrintGraph(unordered_map<int,vector<int>> &adj){

//      int n = adj.size();
//      rep( i, 1, n+1 ) {
//           cout << i << "->";
//           for(auto j : adj[i])
//                cout << j << " ";
//           cout << endl;
//      }
// }
// void Bfs(unordered_map<int, vector<int> > & adj){

//      unordered_map<int,bool> visited;

//      queue<int> q;
//      q.push(1);
//      while (!q.empty()){
          
//           int front = q.front();
//           q.pop();

//           if(!visited[front]){

//                visited[front] = 1;
//                cout << front << " ";
//                for(auto i : adj[front]){
//                     q.push(i);
//                }
//           }
//      }
//      cout << q.size() << endl;
// }
// //Driver Code 
// signed main(){


//      int n,m;

//      cin >> n >> m;
//      unordered_map<int,vector<int>> adj;
//      rep( i, 0, m+1 ) {
     
//           int u,v;
//           cin >> u >> v;
//           adj[u].push_back(v);
//           adj[v].push_back(u);
//      }     
//      // PrintGraph(adj);

//      Bfs(adj);
// }
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
#define SetBits(a) __builtin_popcount(a)
#define SetBitsll(a) __builtin_popcountll(a)
const int N = 1e6+3;
const int MOD = 1e9 + 7;

/*
     ***    Saad a Peaceful soul ⭐⭐⭐⭐⭐⭐⭐ 😁 Zindagi me maza Aana Chahye Bs  ***  
*/

using namespace std;



//Driver Code 
signed main(){

     int n;
     cin >> n;

     int * A = new int[n];

     for (int i = 0; i < n; i++)
     {
          cin >> A[i];
     }
     
     int k;
     cin >> k;

     while (k--){
          
          int ele = A[0];
          A[0] = -1;

          for (int i = 0; i < n-1; i++){
               A[i] = A[i+1];
          }
          A[n-1] = ele;
     }
     for(int i = 0; i < n; i++)
          cout << A[i] << " ";
     cout << endl;
     
}