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

// TC O(2^N) , SC O(N) Recursive
int countDerange(vi &A, int n){
    if( n == 1 )
        return 0;
    if( n == 2)
        return 1;
    
    return ((n-1) % MOD * (countDerange(A,n-2)%MOD + countDerange(A,n-1)%MOD )) % MOD;
}

// TC O(N) , SC O(N) +  Stack b/c of recursion O(N)
vi dp(N,-1);
int countDerangeMem(vi &A, int n){
    if( n == 1 )
        return 0;
    if( n == 2)
        return 1;
    if(dp[n] != -1)
        return dp[n];
    return dp[n] =  ((n-1) % MOD * (countDerangeMem(A,n-2)%MOD + countDerangeMem(A,n-1)%MOD) ) % MOD;
}

// TC O(N) , SC O(N)
int countDerangeTab(vi &A, int n){

    //Bottom up building base dp[i] depends dp[i-1] , dp[i-2];
    dp[1] = 0;
    dp[2] = 1;
    
    rep( i, 3, n+1 )
        dp[i] =( i-1 * (dp[i-2] % MOD + dp[i-1] % MOD)) %MOD;

    return dp[n];
}

// TC O(N) , SC O(1)
int countDerangeOptimal(vi &A, int n){

    //Bottom up building base dp[i] depends dp[i-1] , dp[i-2];
    int var1 = 0;
    int var2 = 1;
    int var3;
    
    rep( i, 3, n+1 ){

        var3 = ((i-1 % MOD )* (var1 % MOD + var2 % MOD)) % MOD;
        var1 = var2;
        var2 = var3;
    }

    return var2;
}

//Driver Code 
int main(){


    int n;
    cin >> n;
    vi A(n);
    rep( i, 0, n )
        cin >> A[i];
    
    cout << countDerange(A,n) << endl;
    cout << countDerangeMem(A,n) << endl;
    cout << countDerangeTab(A,n) << endl;
    cout << countDerangeOptimal(A,n) << endl;
    return 0;
}