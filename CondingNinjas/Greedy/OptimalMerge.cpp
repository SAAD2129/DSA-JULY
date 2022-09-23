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

int MergeOptimal(vi &A){
    int n = A.size();
    priority_queue<int,vector<int> ,greater<int> > pq;
    int cost = 0;
    rep( i, 0, n ) {
    
        pq.push(A[i]);
    }
    while (pq.size() > 1)
    {
        int a = pq.top();
        pq.pop();
        int b = pq.top();//6 11
        pq.pop();
        pq.push(a+b);
        cost += (a+b);
    }
    return cost;   
}
//Driver Code 
int main(){

    int n;
    cin >> n;   
    vi A(n);
    rep( i, 0, n ) {
    
        cin >> A[i];
    }
    cout << MergeOptimal(A) << endl;
    return 0;
}