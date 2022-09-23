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
vi dp(N,-1);
int add(int a, int b){
    return (a % MOD + b % MOD) %MOD;
}
int mul(int a, int b){
    return ((a % MOD) * (b % MOD)) %MOD;
}

int paintPost(int n, int k){
    if( n == 1 )
        return k;
    if( n == 2 )
        return add(k,mul(k,k-1));
    
    //Dp
    if(dp[n] != -1)
        return dp[n];

    return dp[n] = add( mul(paintPost(n-2,k),k-1), mul(paintPost(n-1,k),k-1));
     
}

int paintPostTab(int n, int k){
    dp = vi(N,-1);

    dp[1] = k;
    dp[2] = add(k,mul(k,k-1));
    rep( i, 3, n+1 ) {
    
        dp[i] = add(mul(dp[i-2],k-1),mul(dp[i-1],k-1));
    }
    return dp[n];
}

int paintPostOptimal(int n, int k){
    

    int var1 = k;
    int var2 = add(k,mul(k,k-1));
    int var3;
    rep( i, 3, n+1 ) {
    
        var3 = add(mul(var2,k-1),mul(var1,k-1));
        var1 = var2;
        var2 = var3;
    }
    return var2;
}

//Driver Code 
int main(){

    int n,k;
    cin >> n >> k;

    cout << paintPostOptimal(n,k) << endl;
    return 0;
}