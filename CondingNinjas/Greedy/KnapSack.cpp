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

bool compare(pii &a, pii &b){

    double v1 = a.ff * 1.0/a.ss;
    double v2 = b.ff * 1.0/b.ss;

    return v1 > v2;
}
int KnapSack(vector<pii> &A, int w){

    int n = A.size();
    sort(A.begin(),A.end(),compare);
    double ans = 0;
    rep( i, 0, n ) {
        
        if(w >= A[i].ss){//20
            ans += A[i].ff;
            w -= A[i].ss;
            continue;
        }
        double w8now = w * A[i].ff / A[i].ss;
        ans += w8now;
        w = 0;
        break;
    }

    return ans;

}
//Driver Code 
int main(){

    int n , w;
    cin >> n >> w;
    vector<pii> A(n);
    rep( i, 0, n ) {
    
        cin >> A[i].ff >> A[i].ss;
    }
    cout << KnapSack(A,w) << endl;
    return 0;
}