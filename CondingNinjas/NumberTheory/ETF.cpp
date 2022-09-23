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

int binExponentiation(int a, int b,int M){
     a %= M;
     int ans = 1;
     // if a is >= 10^18 OR if MOD = 10^18 this will not work because a & MOD will have approximate same rage so it won't be smaller any more
     // a %=MOD;
     while (b) {
          if (b & 1)
               ans = (ans * 1LL * a) % M;
          
          a = (a * 1LL * a) % M;
          b >>= 1;
     }
     return ans;
}    

//Driver Code 
signed main() {

     // euler totient function is phi(n) = etf(n) = coprimes of(n)
     //eg..   etf of 5 is 4  ==> b/c  

     /*
     genaral formula phi(n) = n * product(1-1/p)
     where n is an integer & p is the all co-primes & they are unique less than n

     */

     // what is b is 10 ^ 18 & you have query (a^b) ^c 
  


     /*
     Euler's Theoram 
     a^b congerence (a ^b%phi(n) % m
     or in lemon terms
     (a^b) % n = (a^b%phi(n)) % n

     if n is prime phi(n) = (n-1)
          (a^b) % n = (a^b%n-1) % n
     else
          (a^b) % n = (a^b%phi(n)) % n
     */


     int n,p,tp;
     cin >> n;
     vi A;
     // 50 ^ 64 ^ 32
     int mod = 1140;
     int ans = 0;
     rep( i, 0, A.size() ) {
     
          ans = ((ans * 10) + A[i]) % mod;
     }
     cout << ans << endl;
     cout << binExponentiation(n,ans,1337) << endl;
}