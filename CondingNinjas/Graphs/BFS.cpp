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
const int N = 1e5+2;
const int MOD = 1e9 + 7;

/*
    ***    Saad a Peaceful soul ⭐⭐⭐⭐⭐⭐⭐ 😁 Zindagi me maza Aana Chahye Bs  ***  
*/

using namespace std;

vi visited(N,0);

void BFS(vii &adj){
    queue<int> q;
    q.push(1);
    visited[1] = 1;

    while (!q.empty()){
        int node = q.front(); // 1
        q.pop();
        cout << node << endl;

        for(auto i : adj[node]){

            if(!visited[i]){
                visited[i] = 1;
                q.push(i);
            }
        }
    }
}
vii Graph(){

    int n,m;
    cin >> n >> m;

    vii adj(n+1);
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

    vii adjList = Graph();

    
    

    return 0;
}