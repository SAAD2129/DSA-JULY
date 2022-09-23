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
//tc O(2^n) && Sc O(n) Recursive
int WaysToMakeT(vi &A, int n, int t){

    if( t == 0 )
        return 1;
    if( t < 0 )
        return 0;

    int ans = 0;
    rep( i, 0, n )
        ans += WaysToMakeT(A,n,t-A[i]);

    return ans;
}

vi dp(N,0);
//tc O(n) && Sc O(n) Recursive + O(n) 
int WaysToMakeTMem(vi &A, int n, int t){

    if( t == 0 )
        return 1;
    if( t < 0 )
        return 0;
    if(dp[t] != -1)
        return dp[t];
    int ans = 0;
    rep( i, 0, n )
        ans += WaysToMakeTMem(A,n,t-A[i]);

    return dp[t] = ans;
}
int WaysToMakeTTab(vi &A, int n, int t){

    dp[0] = 1;
    
    int ans = 0;
    rep( i, 1, t+1 )
        rep( j, 0, n )
            if(i-A[j] >= 0)
                dp[i] += dp[i-A[j]];
    
    //doubt ? how it is working as same that of upper nested loop
    // rep( i, 1, t+1 ){

    //     if(t-A[i] >= 0)
    //         dp[i] += dp[t-A[i]];
    // }

    return dp[t];
}

//Driver Code 
int main(){

    int n,t;
    cin >> n >> t;
    vi A(n);
    rep( i, 0, n )
        cin >> A[i];
    
        cout << WaysToMakeT(A,n,t) << endl;
        cout << WaysToMakeTMem(A,n,t) << endl;
        cout << WaysToMakeTTab(A,n,t) << endl;

    return 0;
}