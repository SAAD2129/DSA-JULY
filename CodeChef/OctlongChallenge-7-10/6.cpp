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
const int MOD = 998244353;

/*
 ***    Saad a Peaceful soul ⭐⭐⭐⭐⭐⭐⭐ 😁 Zindagi me maza Aana Chahye Bs  ***
 */

using namespace std;

// Driver Code
signed main()
{

     int t;
     cin >> t;
     while (t--)
     {

          int n, m;
          cin >> n >> m;

          vii A(n, vi(m));
          vi Arr(n);
          int And = 1;
          int sum = 0;
          for (int i = 1; i <= m; i++){
               for (int j = 1; j <= m; j++){
                    sum += i & j;
                    sum %= MOD;
               }
          }
          cout << sum << endl;
          // cout << endl << endl;
     }
}