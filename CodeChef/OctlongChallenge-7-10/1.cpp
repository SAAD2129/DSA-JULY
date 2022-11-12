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

     int t;
     cin >> t;
     while(t--) {
     
          int x,y;
          cin >> x >> y;
          if(x < y)
               cout << "First" << endl;
          else if(x == y)
               cout << "Any" << endl;
          else
               cout << "Second" << endl;
     }
     
}