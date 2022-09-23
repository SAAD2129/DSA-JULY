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
    ***    Saad a Peaceful soul ⭐⭐⭐⭐⭐⭐⭐ 😁 Zindagi me maza Aana Chahye Bs  ***  
*/

using namespace std;

//Driver Code 
int main(){

    int n;
    cin >> n;
    vi A(n);
    rep( i, 0, n ) {
    
        cin >> A[i];
    }

    ll mx = 0, mn = 0;
    sort(A.begin(),A.end());
    // -3 0 10 12
    //mx = 13 + 12 25
    // mn = 3 10 -12
    rep( i, 0, n/2 ) {
    
        mx += (A[i+n/2] - A[i]);
        mn += (A[2*i +1] - A[2 * i]);
    }
    cout << mn << " " << mx << endl;
    return 0;
}