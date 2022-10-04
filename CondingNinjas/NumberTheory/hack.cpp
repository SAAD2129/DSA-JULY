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
const int N = 2e5+3;
const int MOD = 1e9 + 7;

/*
     ***    Saad a Peaceful soul ⭐⭐⭐⭐⭐⭐⭐ 😁 Zindagi me maza Aana Chahye Bs  ***  
*/

using namespace std;
vi Mult_ct(N,0);
vi hsh(N,0);
void Seive(){

     for (int i = 2; i*i <= N; i++)
     {
          for (int j = i; j <= N; j+=i)
          {
               Mult_ct[i] += hsh[j];
          }
          
     }
     
}
//Driver Code 
signed main(){


     int n;
     cin >> n;
     vi A(n);

     rep( i, 0, n ) {
     
          int x;
          cin >> x;
          hsh[x]++;
     }
     Seive();
     int t;
     cin >> t;
     while(t--) {
     
          int p,q;
          cin >> p >> q;

          long long lcm = p * 1LL * q / __gcd(p,q);
          long ans = Mult_ct[p] + Mult_ct[q];
          if(lcm < N) 
               ans -= Mult_ct[lcm];
          cout << ans << endl;
     }
     
}