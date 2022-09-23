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
const int N = 1e3+2;
const int MOD = 1e9 + 7;

/*
    ***    Saad a Peaceful soul ⭐⭐⭐⭐⭐⭐⭐ 😁 Zindagi me maza Aana Chahye Bs  ***  
*/

using namespace std;

vii dp(N,vi(N,-1));

int ReduceDish(vi &A, int n, int idx, int time){

    if(idx == n)
        return 0;
    
    if(dp[idx][time] != -1)
        return dp[idx][time];
    //including

    int inc = A[idx] * (time + 1) + ReduceDish(A, n, idx+1, time+1);

    //exluding the ith one
    int exc = 0 + ReduceDish(A, n, idx+1, time);

    dp[idx][time] = max(inc,exc);
    return dp[idx][time];
}

int ReduceDishTab(vi &A, int n){

    for (int idx = n - 1; idx >= 0; idx--)
        for (int time = idx; time >= 0; time--)
            dp[idx][time] = max(A[idx] * (time+1) + dp[idx+1][time+1],0 + dp[idx+1][time]);


    rep( i, 0, n ) {
    
        rep( j, 0, n ) {
        
            cout << dp[i][j] << " ";
        }cout << endl;
    }

    
    return dp[0][0];   
}

//Driver Code 
int main(){

    int t;
    cin >> t;
    while(t--) {
    
        int n;
        cin >> n;
        vi A(n);
        rep( i, 0, n )
            cin >> A[i];    
        sort(A.begin(),A.end());
        dp = vii( N,vi(N,0));
         ReduceDishTab(A,n);
         cout << endl
                << endl;

    }

    return 0;
}