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

vii Graph(){

    int n,m;
    cin >> n >> m;

    vii adj(n);
    rep( i, 0, m ) {
    
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
    return adj;
}
void PrintGraph(vii &adj){

    int n = adj.size();
    rep( i, 0, n ) {
        cout << i << "->";
        for(auto j : adj[i])
            cout << j << " ";
        cout << endl;
    }
}

bool isCycle(int i , vii &adj, vi &stack, vb &visited){

    stack[i] = true;
    if(!visited[i]){
        visited[i] = 1;
        for(auto j : adj[i]){
            if(!visited[i] && isCycle(j,adj,stack,visited))
                return true;
            else if(stack[i])
                return true;
        }
    }
    stack[i] = false;
    return false;
}


bool DetectCycle(vii &adj) {

    int n = adj.size();

    vi stack(N,0);
    bool cycle = 0;
    vb visited(N,0);

    rep( i, 0, n ) {
    
        if(!visited[i] && isCycle(i,adj,stack,visited)){
            cycle = true;
        }
    }
    return cycle;
}
//Driver Code 
int main(){

    vii adj = Graph();
    PrintGraph(adj);
    cout << DetectCycle(adj) << endl;
    return 0;
}