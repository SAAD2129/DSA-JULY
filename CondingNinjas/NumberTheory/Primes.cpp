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
const int N = 1e7 + 3;
const int MOD = 1e9 + 7;

/*
 ***    Saad a Peaceful soul ⭐⭐⭐⭐⭐⭐⭐ 😁 Zindagi me maza Aana Chahye Bs  ***
 */

using namespace std;

vb Seive(){
     vb A(N, 1);
     A[0] = 0;
     A[1] = 0;
     for (int i = 2; i * i <= N; i++)
          if (A[i])
               for (int j = i * i; j <= N; j += i)
                    if (A[j])
                         A[j] = 0;
     return A;
}
vi PrimeFactors(int n){
     vi ans;
     for (int i = 2; i * i <= n; ++i)
          while (n % i == 0){
               ans.push_back(i);
               n /= i;
          }
     if (n > 1)
          ans.push_back(n);
     return ans;
}
// Driver Code
signed main()
{
     vb Primes = Seive();
     int t;
     cin >> t;
     while (t--)
     {
          int n;
          cin >> n;
          if (Primes[n])
               cout << "is Prime" << endl;
          else
               cout << "not Prime" << endl;
     }
}