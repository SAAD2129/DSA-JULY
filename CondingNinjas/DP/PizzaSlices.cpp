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

vii dp(N,vi(N,-1));
int slicePizza(vi &A, int idx, int endidx, int n){


    if(n == 0 || idx > endidx)
        return 0;

    if(dp[idx][n] != -1)
        return dp[idx][n];
    int taking = A[idx] + slicePizza(A,idx+2,endidx,n-1);
    int notTaking = 0 + slicePizza(A,idx+1,endidx,n);

    return dp[idx][n] = max(taking,notTaking);
}
int slicePizzaTab(vi &A, int k){

    dp = vii(N,vi(N,0)); 
    for (int idx = k - 2; idx >= 0; idx--){
        for (int n = 1; n <= k/3; n++){
            int take = A[idx] + dp[idx+2][n-1];
            int nottake = dp[idx +1][n];
            dp[idx][n] = max(take,nottake);
        }
    }

    int case1 =  dp[0][k/3];
    dp = vii(N,vi(N,0)); 

    for (int idx = k - 1; idx >= 0; idx--){
        for (int n = 1; n <= k/3; n++){
            int take = A[idx] + dp[idx+2][n-1];
            int nottake = dp[idx +1][n];
            dp[idx][n] = max(take,nottake);
        }
    }
    int case2 =  dp[1][k/3];

    return max(case1,case2);
}

int slicePizzaTab2(vi &A, int k){

    vi prev(k+2,0);
    vi curr(k+2,0);
    vi next(k+2,0);
    for (int idx = k - 2; idx >= 0; idx--){
        for (int n = 1; n <= k/3; n++){
            int take = A[idx] + next[n-1];
            int nottake = curr[n];
            prev[n] = max(take,nottake);
        }
        next = curr;
        curr = prev;
    }

    int case1 =  prev[k/3];
    
    prev = vi(k+2,0);
    curr = vi(k+2,0);
    next = vi(k+2,0);
    for (int idx = k - 1; idx >= 1; idx--){
        for (int n = 1; n <= k/3; n++){
            int take = A[idx] + next[n-1];
            int nottake = curr[n];
            prev[n] = max(take,nottake);
        }
        next = curr;
        curr = prev;
    }
    int case2 =  curr[k/3];

    return max(case1,case2);
}
//Driver Code 
int main(){

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vi A(n);
        /*
        
        */
        rep( i, 0, n )
            cin >> A[i];
        
        int k = A.size();

        cout << slicePizzaTab2(A,k) << endl;
            
    }
   
    return 0;
}