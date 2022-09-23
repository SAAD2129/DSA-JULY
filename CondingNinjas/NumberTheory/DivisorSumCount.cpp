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
/*
here is t is an integer 
x = p1^ n1 * p2 ^ n2 * p3 ^ n3 * ..... * pt ^ nt
cout of divisors formula = (n1 + 1) * (n2 + 1) * (n3 + 1) * ........ * (nt + 1)
sum of divisors formula = ((p1^n1 + 1) / p1 -1) * ((p2^n2 + 1) / p2 -1) * ((p3^n3 + 1) / p3 -1) .....
*/

//Driver Code 
signed main(){

     int n;
     cin >> n;
     int ct = 0,sum = 0;
     for(int i = 1; i*i <= n; ++i){

          if(n % i == 0){
               cout << i << " " << n/i << " ";
               ct += 1;
               sum += i;
               if(n/i != i){
                    sum += n/i;
                    ct += 1;
               }
          }
     }
     cout << endl;
     cout << ct << " " << sum << endl;
}