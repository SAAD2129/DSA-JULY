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

bool compare(pii &a, pii &b)
{
    double v1 = a.ff *1.0 / a.ss;
    double v2 = b.ff *1.0 / b.ss;

    return v1 > v2;
}
int TheifProfitMax(vector<pii> &A, int w){

    sort(A.begin(),A.end(),compare);

    int ans = 0;
    rep( i, 0, A.size() ) {
    
        cout << A[i].ff << " " << A[i].ss << " " << A[i].ff *1.0 / A[i].ss << endl;
    }
    rep(i, 0, A.size()){

        if(w >= A[i].ss){//94 
            ans += A[i].ff;
            w -= A[i].ss;
            continue;
        }
        double vw = A[i].ff *1.0 / A[i].ss;
        ans += vw * w;
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

    cout << TheifProfitMax(A,w) << endl;

    return 0;
}