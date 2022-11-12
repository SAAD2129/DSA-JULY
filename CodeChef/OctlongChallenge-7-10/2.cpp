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

// Driver Code
signed main()
{

     int t;
     cin >> t;
     while (t--)
     {

          int a, b;
          cin >> a >> b;

          int res = a * b;

          if (res % 4 == 0)
               cout << (res / 4) << endl;
          else
               cout << (res / 4) + 1 << endl;
     }
}