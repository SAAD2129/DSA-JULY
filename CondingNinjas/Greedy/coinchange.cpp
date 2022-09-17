#include<bits/stdc++.h>

#define ll long long
#define lli ll int
#define vi vector<int>
#define vs vector<string>
#define vss vector<vs>
#define vc vector<char>
#define vii vector<vi>
#define pii pair<int,int>
#define vip vector<pii>
#define ff first
#define ss second
#define rep(i,a,b) for(int i=a;i<b;i++)
const int N = 1e6+3;
const int MOD = 1e9 + 7;

/*
    ***    Saad a Peaceful soul 7 Star ==> Zindagi me maza Aana Chahye Bs  ***  
*/

using namespace std;

int IndianCoinChange(vi & A, int x){

    sort(A.begin(), A.end(),greater<int>());
    int ans = 0;
    rep( i, 0, A.size() ) {

        ans += x/A[i];
        x -= x/A[i] * A[i];
    }
    return ans;
}

//Driver Code 
int main(){

    int n, k;
    cin >> n >> k;
    vi A(n);
    rep(i, 0, n)
    {

        cin >> A[i];
    }
    cout << IndianCoinChange(A,k) << endl;
    return 0;
}