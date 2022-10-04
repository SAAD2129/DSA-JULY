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
// bool compare(){

//      return abs(pq.top() - ele) >=2;
// }
// //Driver Code 
// signed main(){

//      int t;
//      cin >> t;
//      while(t--) {
          
//           int n = 6;
//           // cin >> n;
//           vi A(n);
//           priority_queue<int, vector<int>, compare> pq; 
//           rep( i, 0, n ) {
          
//                A[i] = i+1;
//           }
//           rep( i, 0, n ) {
          
//                pq.push(A[i]);
//           }

//           while (!pq.empty())
//           {
//                cout << pq.top() << " ";
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


using namespace std;

//Driver Code 
signed main(){

     int t;
     cin >> t;
     while(t--) {
     
          int A,B,X;
          cin >> A >> B >> X;


          if(A == B)
               cout << "YES" << endl;
          else if(A > B){
              int  result = A-(2*X) + B;
              if(result == 0)
                    cout << "YES" << endl;
               else {
                    cout << "NO" << endl;
               }
          }
          else if(A < B){
               int  result = A+(2*X) - B;
              if(result == 0)
                    cout << "YES" << endl;
               else {
                    cout << "NO" << endl;
               }
          }
     }
}