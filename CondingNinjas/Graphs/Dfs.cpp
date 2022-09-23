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


bool v[N];
using namespace std;

void dfs(int node, vii &adj){

    v[node] = 1;

    for(auto i : adj[node]){

        if(!v[i]){
            v[i] = 1;
            dfs(i,adj);
        }
    }
    cout << node << " ";
}

void PrintGraph(vii &adj){

    int n = adj.size();
    rep( i, 1, n+1 ) {
        cout << i << "->";
        for(auto j : adj[i])
            cout << j << " ";
        cout << endl;
    }
}
vii Graph(){

    int n,m;
    cin >> n >> m;

    vii adj(n+1);
    rep( i, 0, N ) {
    
        v[i] = 0;
    }
    rep( i, 0, m ) {
    
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    return adj;
}
//Driver Code 
int main(){

    vii adj = Graph();
    dfs(1,adj);

    return 0;
}