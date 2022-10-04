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
const int N = 1e5+3;
const int MOD = 1e9 + 7;

using namespace std;

int binMutiply(int a, int b,int m){

     int ans = 0;

     while (b) {
          if (b & 1)
               ans = (ans + a) % m;
          
          a = (a + a) % m;
          b >>= 1;
     }
     return ans;
}

int binExponentiation(int a, int b,int m){
     int ans = 1;
     while (b) {
          if (b & 1)
               ans = binMutiply(ans,a,m);
          
          a = binMutiply(a,a,m);
          b >>= 1;
     }
     return ans;
}

//Driver Code 
signed main(){


     
          int a,b;
          cin >> a >> b;
          // b %=MOD;
          cout << binExponentiation(a,binExponentiation(b,5,MOD-1),MOD) << endl;
     
}