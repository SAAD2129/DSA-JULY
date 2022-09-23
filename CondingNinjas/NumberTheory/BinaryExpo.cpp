#include <bits/stdc++.h>

#define ll long long
#define lli ll int
#define vi vector<int>
#define vs vector<string>
#define vss vector<vs>
#define vc vector<char>
#define vb vector<bool>
#define vii vector<vi>
#define pii pair<int, int>
#define vpii vector<pii>
#define vip vector<pii>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)
#define SetBits(a) __builtin_popcount(a)
#define SetBitsll(a) __builtin_popcountll(a)
const int N = 1e6 + 3;
const int MOD = 1e9 + 7;

/*
 ***    Saad a Peaceful soul ⭐⭐⭐⭐⭐⭐⭐ 😁 Zindagi me maza Aana Chahye Bs  ***
 */

// assumtion  b <= 10 ^ 18
using namespace std;

int binExpRecur(int a, int b){

     if (b == 0)
          return 1;
     int result = binExpRecur(a, b / 2);
     if (b & 1)
          return (a * ((result * 1LL * result) % MOD)) % MOD;

     else
          return (result * 1LL * result) % MOD;
}
int binMutiply(int a, int b){

     int ans = 0;

     while (b) {
          if (b & 1)
               ans = (ans + a) % MOD;
          
          a = (a + a) % MOD;
          b >>= 1;
     }
     return ans;
}
int binExpIter(int a, int b){

     int ans = 1;
     // if a is >= 10^18 OR if MOD = 10^18 this will not work because a & MOD will have approximate same rage so it won't be smaller any more
     // a %=MOD;
     while (b) {
          if (b & 1)
               ans = binMutiply(ans,a);
          
          a = binMutiply(a,a);
          b >>= 1;
     }
     return ans;
}


// Driver Code
signed main(){

     int a, b;
     cin >> a >> b;
     cout << binExpIter(a, b) << endl;
     cout << binExpRecur(a, b) << endl;
}