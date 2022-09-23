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
const int N = 1e6+3;
const int MOD = 1e9 + 7;

/*
    ***    Saad a Peaceful soul ⭐⭐⭐⭐⭐⭐⭐ 😁 Zindagi me maza Aana Chahye Bs  ***  
*/

using namespace std;
int global = 0;
int CoinWays(vi &arr, int n, int x){

    if(x == 0)
        return 1;
    if(x < 0)
        return 0;
    if(n <= 0)
        return 0;
    cout << global << endl;

    return CoinWays(arr,n,x-arr[n-1]) + CoinWays(arr,n-1,x);
}
//Driver Code 
int main(){

        int n,x;
        cin >> n >> x;

        vi a(n);
        rep( i, 0, n ) {
        
            cin >> a[i];
        }
        vii dp(n+1, vi(x+1,0));
        // cout << CoinWays(arr, n, x) << endl;

        dp[0][0] = 1;
        rep( i, 1, n+1 ) {
        
            rep( j, 0, x+1 ){

                if(j-a[i-1] >= 0){
                    dp[i][j] += dp[i][j-a[i-1]];
                    // continue;
                }
                    dp[i][j] += dp[i-1][j];
            }
            
        }
        rep( i, 0, n+1 ) {
        
            rep( j, 0, x+1 ){

                cout << dp[i][j] << " ";
            } cout << endl;

        }
        cout << dp[n][x] << endl;
    return 0;
}