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

vector < int > countSmallerOrEqual(int * a, int * b, int n, int m) {

     vector<int> ans;

     for(int i = 0; i < n; i++){
          int ct = 0;
          for(int j = 0; j < m; j++){

               if(a[i] >= b[j]){
                    ct++;
               }
          }
               ans.push_back(ct);
     }
     
     return ans;
}

//Driver Code 
signed main(){

     int t;
     cin >> t;
     while(t--){

          int n,m;

          cin >> n;

          int * a = new int[n];
          int * b = new int[m];


          for(int i = 0; i < n; ++i){
               cin >> a[i];
          }

          cin >> m;
          for(int i = 0; i < n; ++i){
               cin >> b[i];
          }

          for(auto i : countSmallerOrEqual(a,b,n,m)){
               cout << i << " ";
          } cout << endl;
     }


}