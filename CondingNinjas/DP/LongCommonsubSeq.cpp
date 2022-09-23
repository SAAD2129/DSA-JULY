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

//SC O(n2) && TC O(n2) 
int lcsMem(string &s1, string &s2, int n, int m, string &ans){

    if( n ==  0 || m == 0)
        return 0;

    if(dp[n][m] != -1)
        return dp[n][m];

    if(s1[n-1] == s2[m-1]){
        ans.push_back(s1[n-1]);
        return dp[n][m] =  1 + lcsMem(s1,s2,n-1,m-1,ans);
    }

    return dp[n][m] = max(lcsMem(s1,s2,n,m-1,ans),lcsMem(s1,s2,n-1,m,ans));

}
int dpThree[200][200][200];
int lcsThree(string &s1, string &s2, string s3, int n, int m, int o){

    if( n ==  0 || m == 0 || o == 0)
        return 0;

    if(dpThree[n][m][o] != -1)
        return dpThree[n][m][o];

    if(s1[n-1] == s2[m-1] && s1[n-1] == s3[o-1])
        return 1 + lcsThree(s1,s2,s3,n-1,m-1,o-1);

    return dpThree[n][m][o] = max(lcsThree(s1,s2,s3,n,m,o-1), max(lcsThree(s1,s2,s3,n,m-1,o),lcsThree(s1,s2,s3,n-1,m,o)));

}

//SC O(n2) && TC O(n2) 
int lcsTab(string s1, string s2, int n, int m){

    dp = vii(N,vi(N,0));
    rep( i, 0, n+1 ){

        rep( j, 0, m+1 ){
            if(!i || !j)
                continue;
            if(s1[i-1] == s2[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
        }
    }

    rep( i, 0, n+1 ) {
    
        rep( j, 0, m+1 )
            cout << dp[i][j] << " ";
        cout << endl;
    }
            
    return dp[n][m];
}

//SC O(n) && TC  O(n2)
int lcsOptimal(string s1, string s2, int n, int m){

    vi curr(N,0);
    vi next(N,0);

    rep( i, 1, n+1 ) {//8
    
        rep( j, 1, m+1 )
            if(s1[i-1] == s2[j-1])
                curr[j] = 1 + next[j-1];
            else
                curr[j] = max(next[j] , curr[j-1]);

            
        rep( i, 1, n+1  ) {
        
            cout << curr[i] << " ";    
        }   cout << endl;
        next = curr;

    }
    int idx = max(n,m);
    return next[idx];
}
//Driver Code 
int main(){

    string s1,s2;
    cin >> s2 >> s1;
    int n = s1.size();
    int m = s2.size();
    string s3;
    lcsMem(s1,s2,n,m,s3);
    string temp = s1;
    int o = s3.size();
    // cout << s3 << endl;
    cout << o << m << endl;
    // cout << lcsMem(s1,s3,n,m,s2) << endl;
    memset(dpThree,-1,sizeof(dpThree));
    cout << lcsThree(s1,s2,s3,n,m,o) << endl;

    // cout << lcsOptimal(s1,s2,n,m) << endl;
    // cout << lcsTab(s1,s2,n,m) << endl;
    

    return 0;
}