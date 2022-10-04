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

using namespace std;

vi lpf(N,0),hpf(N,0);
vi Facts(N,0);

vb Seive(){
     vb isPrime(N, 1);
     isPrime[0] = isPrime[1] = 0;
     for (int i = 2; i * i <= N; i++){
          if (isPrime[i]){
               lpf[i] = hpf[i] = i;
               for (int j = 2 * i; j <= N; j += i){
                    isPrime[j] = 0;
                    hpf[j] = i;
                    if(!lpf[j])
                         lpf[j] = i;
               }  
          }
     }
     return isPrime;
}

// this gives multiples of i till n 
vi Multiples(int n){
     vi ans[n];
     for (int i = 2;  i <= n; i++)
          for (int j = i; j <= n; j += i)
               ans[j].push_back(i);
          
     return ans[n];
}
vi PrimeFactors(int n){
     vi ans;
     Seive();
     while (n > 1){
          int pf = hpf[n];
          while(!(n % pf)){
               ans.push_back(pf);
               n/=pf;
          }
     }
     return ans;
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
int binExponentiation(int a, int b){

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
signed main(void) {
     

     
     Facts[0] = Facts[1] = 1;

     rep( i, 2, N ) {
     
          Facts[i] = (Facts[i-1] * 1LL * Facts[i-2]) % MOD;
     }
     // 
     cout << Facts[5] << endl;

     int t;
     cin >> t;
     while(t--) {
     
          int n,k;
          cin >> n >> k;
          int ans = Facts[n];
          int denom = Facts[n-k] * Facts[k];
          ans = ans * binExponentiation(denom, MOD - 2);
          cout << ans << endl;
     }

}