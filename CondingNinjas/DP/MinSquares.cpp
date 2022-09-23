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
const int N = 1e6 + 3;
const int MOD = 1e9 + 7;

/*
 ***    Saad a Peaceful soul ⭐⭐⭐⭐⭐⭐⭐ 😁 Zindagi me maza Aana Chahye Bs  ***
 */

using namespace std;

int dp[N];

int Numbers(int n) {

    if (n == 3 || n == 2 || n == 1 || n == 0)
        return n;
    if(dp[n] != MOD)
        return dp[n];
                    // 4*4 <= 5
    for (int i = 1; i*i <= n; i++)
        dp[n] = min(dp[n], 1 + Numbers(n - i*i));
    
    return dp[n];
}
int Minsquares(int n){
    vi dp(N,MOD);

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
                        //3 <=15
    for (int i = 1; i*i <= n; ++i)
        for (int j = 0; i*i+j <= n; j++){
            dp[i*i + j] = min(dp[i*i + j] , 1 + dp[j]);
            cout << dp[i*i+j] << endl;
        }
            
    return dp[n];
}

// 5 dry runs 15 25 9 13 5
// Driver Code
int main() {   
    rep( i, 0, N ) {
    
        dp[i] = MOD;
    }

    int n;
    cin >> n;
    rep( i, 0, n ) {
        int num;
        cin >> num;
        cout << num << " " << Minsquares(num) << endl;
    }
    // cout << Numbers(n) << endl;
    return 0;
}