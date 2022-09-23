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

//Tc = O(2 ki power n) && SC = auxilary recursion calls 
int RodCut(int n, int x, int y, int z){


    if( n == 0 )
        return 0;
    if( n < 0)
        return INT_MIN;
        
    int op1 = RodCut(n-x,x,y,z) + 1;
    int op2 = RodCut(n-y,x,y,z) + 1;
    int op3 = RodCut(n-z,x,y,z) + 1;

    return max(op1,max(op2,op3));
}

//O(n) space & O(n)
int RodCutMem(int n, int x, int y, int z){

    if( n == 0 )
        return 0;
    if( n < 0)
        return INT_MIN;
    if(dp[n] != -1)
        return dp[n];
    int op1 = RodCutMem(n-x,x,y,z) + 1;
    int op2 = RodCutMem(n-y,x,y,z) + 1;
    int op3 = RodCutMem(n-z,x,y,z) + 1;

    return dp[n] =  max(op1,max(op2,op3));
}

//O(n) space O(n)
int RodCutTab(int n, int x, int y, int z){

    dp = vi(N,-1);
    dp[0] = 0;
    // dp [] =   0    1    2    3    4    5    6    7
    //           0   IM    1   IM    2    1    3    2 
    rep( i, 1, n+1 ) {//3
        //First piece
        if( i-x >= 0 && dp[i-x] != -1 )
            dp[i] = max(dp[i],dp[i-x] + 1);

        //Second piece
        if( i-y >= 0 && dp[i-y] != -1 )
            dp[i] = max(dp[i],dp[i-y] + 1);

        //Third piece
        if( i-z >= 0 && dp[i-z] != -1 )
            dp[i] = max(dp[i],dp[i-z] + 1);
    }
    rep( i, 0, n+1) {
        
        cout << dp[i] << " ";
        
    } cout << endl;
    return dp[n];
}
//Driver Code 
int main(){

    int n,x,y,z;

    cin >> n >> x >> y >> z;
    int ans =  RodCutTab(n,x,y,z) ;
    ans = (ans < 0) ? 0 : ans;
    cout << ans << endl;
    return 0;
}