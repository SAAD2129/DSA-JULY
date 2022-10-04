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
const int N = 1e3+3;
const int MOD = 1e9 + 7;

/*
    ***    Saad a Peaceful soul ⭐⭐⭐⭐⭐⭐⭐ 😁 Zindagi me maza Aana Chahye Bs  ***  
*/

using namespace std;

vi wt(N),val(N);
vii dp(N,vi(N,-1));
int knapSack(int n,int w){
    if(w <= 0)
        return 0;
    if(n <= 0)
        return 0;
    
    if(wt[n-1] > w)
        return dp[n][w] = knapSack(n-1,w);

    if(dp[n][w] != -1)
        return dp[n][w];
    return dp[n][w] = max(knapSack(n-1, w - wt[n-1] ) + val[n-1] , knapSack(n-1 ,w)) ;
}


int knapSackTab(int n,int w){

    dp = vii(N,vi(N,0));

    rep( i, 1, n) {
    
        rep( j, 1, w+1){
            if(j > wt[i-1])
                dp[i][j] = max(dp[i-1][j-wt[i-1]] + val[i-1] , dp[i-1][j]);
        }
    }
    rep( i, 0, n ) {
    
        rep( j, 0, w ) {
        
            cout << dp[i][j] << " ";
        } cout << endl;
    }
    return dp[n-1][w];
}
//Driver Code 
int main(){

    int n,w;
    cin >> n >> w;
    rep( i, 0, n ) {
    
        cin >> wt[i];
    }
    rep( i, 0, n ) {
    
        cin >> val[i];
    }

    // cout << knapSackTab(n,w) << endl;
    cout << knapSack(n,w) << endl;
    return 0;
}