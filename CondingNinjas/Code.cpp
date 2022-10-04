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
// // void insert(vector<int>&temp,int a , int b){

// // }
// vector<vector<int>> pairSum(vector<int> &arr, int s){
     
//      vector<vector<int> > ans;

//      multiset<int> st;
//      for (int i = 0; i < arr.size(); i++)
//      {
//           st.insert(arr[i]);
//      }

//      for (int i = 0; i < arr.size(); i++)
//      {

//           if(st.count(s - arr[i])){
//                ans.push_back({arr[i], s-arr[i]});
//                // st.erase(st.find(s-arr[i]));
//           }
//      }
     
//      sort(ans.begin(),ans.end());
//      return ans;
//      // -3 -2 2 3 3
// }

// //Driver Code 
// signed main(){

//      int t;
//      cin >> t;

//      while(t--){

//           int n,k;
//           cin >> n >> k;

//           vector<int> a(n);

//           for(int i = 0; i < n; ++i){

//                cin >> a[i];
//           }
//           for(auto j : pairSum(a,k)){

//                for(auto i : j)
//                     cout << i << ' ';
//                cout << endl;
//           }
//      }

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
bool equationsPossible(vector<string>& equations) {

     int n = equations.size();
     bool check = false;
     int a = 1,b = 1;
     for (int i = 0; i < n; i++) {

          string s = equations[i];
          char ch = s[1];

          cout << ch << endl;
          if(ch == '!') {
               if(a != b) {
                    check = true;
               }
               else{
                    check = false;
               }
          }
          else if(ch == '=') {

               if(a == b) {
                    check = true;
               }
               else {
                    check = false;
               }
          }
     }
     return check;   
}
//Driver Code 
signed main(){

     vs equations = {"a==b","b==a"};
     // char c = '=';
     // cout << char(61) << endl;
     cout << equationsPossible(equations) << endl;
}