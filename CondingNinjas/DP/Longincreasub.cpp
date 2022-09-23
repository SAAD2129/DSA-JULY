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

vi dp(N,1);

// SC O(n) && TC O(n2)
int lis(vi &a, int n,int &ans){

    if(n == 0)
        return 0;
    rep( i, 0, n ) {
    
        if(a[n-1] > a[i])
            ans = max(ans, 1 + lis(a,i,ans));
    }
    return ans;
}
vii twoD(N,vi(N,-1));
// O(n2) && O(n2)
int LisMem(vi &A, int n, int curr,int prev){

    if(curr == n)
        return 0; 

    if(twoD[curr][prev+1] != -1)
        return twoD[curr][prev+1];
    int take = 0;
    if(prev == -1 || A[curr] > A[prev]){
        take = 1 + LisMem(A, n, curr+1, curr);
    }
    int notTake = 0;
    notTake = 0 + LisMem(A, n, curr+1, prev);

    return twoD[curr][prev] = max(notTake,take);

}

//SC O(n2) && TC O(n2)
int LisTab(vi &A, int n){


    for (int curr = n - 1; curr >= 0; curr--){
        for (int prev = curr - 1; prev >= -1; prev--){
            int take = 0;
            if(prev == -1 || A[curr] > A[prev]){
                take = 1 + twoD[curr+1][curr+1];
            }
            int notTake = 0;
            notTake = 0 + twoD[curr+1][prev+1];

            twoD[curr][prev+1] = max(notTake,take);
        }
    }
    return twoD[0][0];
}

// SC O(n) && O(nLog(n))

int LisLog(vi &A, int n){

    vector<int> ans;
    ans.push_back(A[0]);

    rep( i, 1, n ) {
    
        if(A[i] > A[i-1]){
            ans.push_back(A[i]);
        }
        else{
            int index = lower_bound(ans.begin(), ans.end(), A[i]) - ans.begin();
            ans[index] = A[i];
        }
    }
    return ans.size();
}

//Driver Code 
int main(){

    int n;
    cin >> n;
    vi A(n);

    rep( i, 0, n ) {
    
        cin >> A[i];
    }

    /*

    */
    int ans = 0;

    rep( i, 1, n ) {
    
        rep( j, 0, i ) {
        
            if(A[i] > A[j])
                dp[i] = max(dp[i], 1 + dp[j]);
        }
        ans = max(ans,dp[i]);
    }
    // cout << ans << endl;
    ans = 1;
    // cout << lis(A,n,ans) << endl;
    // cout << LisMem(A,n,0,-1);
    // cout << LisTab(A,n) << endl;

    cout << LisLog(A,n) << endl;
    return 0;
}