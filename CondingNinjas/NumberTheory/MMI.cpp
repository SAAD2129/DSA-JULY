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

/*
     ***    Saad a Peaceful soul ⭐⭐⭐⭐⭐⭐⭐ 😁 Zindagi me maza Aana Chahye Bs  ***  
*/

using namespace std;

int binExponentiation(int a, int b){

     int ans = 1;
     
     while (b) {
          if (b & 1)
               ans = (ans * 1LL * a) % MOD;
          
          a = (a * 1LL * a) % MOD;
          b >>= 1;
     }
     return ans;
}

vi Fact(N,1);
//Driver Code 
signed main(){
     /*
     (a/b) % mod = (a * B^-1) % mod
     if(a * b % mod == 1)
          then b is mmi of a
     
     it is not neccessary that mmi for every exist
     mmi is defined if a & m are co-primes(gcd(a,m) == 1) 
     (A^m-1) % m == 1 Fermet little theoram
     by inverse A^-1 we get

          (A^m-2) % mod = A^-1
          (A^m-2) % mod now this can be calculated throught the binary exponentiation function
          
     */

     rep( i, 1, N ) 
          Fact[i] = (Fact[i-1] * 1LL * i) % MOD;
     int t;
     cin >> t;
     while(t--) {
     
          int n,k;
          cin >> n >> k;

          int ans = Fact[n];
          ans = (ans * 1LL * Fact[k] ) % MOD;
          int denom = (Fact[k-n] *1LL* Fact[n]) % MOD;
          ans = (ans * 1LL * binExponentiation(denom,MOD-2)) % MOD;
          cout << ans << endl;
     }
}