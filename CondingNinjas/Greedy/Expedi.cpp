
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

    int t;
    cin >> t;
    while(t--) {
    
        int n;
        cin >> n;
        vector<pii> A(n);
        rep( i, 0, n ) {
        
            cin >> A[i].ff >> A[i].ss;
        }
        int l,p;
        cin >> l >> p;

        rep( i, 0, n ) {
        
            A[i].ff = l - A[i].ff;
        }

        sort(A.begin(),A.end());
        int ans = 0;
        int curr = p;// 10
        bool check = 0;
        priority_queue<int> pq;
        
        rep( i, 0, n ) {
        
            if(curr >= l){
                break;
            }

            while (curr < A[i].ff) {
                if(pq.empty()){
                    check = 1;
                    break;
                }
                ans++;
                curr += pq.top();
                pq.pop();
            }

            if(check)
                break;
            
            pq.push(A[i].ss);
        }

        if(check){
            cout << "-1"<<endl;
            continue;
        }
        while (!pq.empty() && curr < l){
            curr += pq.top();
            pq.pop();
            ans++;
        }
        if(curr < l){
            cout << "-1" << endl;
            continue;
        }
        cout << ans << endl;
    }

    return 0;
}