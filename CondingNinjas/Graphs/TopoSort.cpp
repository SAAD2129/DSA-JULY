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

void PrintGraph(vii &adj){

    int n = adj.size();
    rep( i, 1, n+1 ) {
        cout << i << "->";
        for(auto j : adj[i])
            cout << j << " ";
        cout << endl;
    }
}

//Only directed Acyclic Graphs have topological sort
void TopoLogicalSort(vii &adj, vi &indeg) {

    int n = adj.size();
    queue<int> q;
    rep( i, 0, n+1 ) {
    
        if(indeg[i] == 0){
            cout << i << " ";
            q.push(i);
        }
    }
    cout << endl;
    int ct = 0;
    while (!q.empty()) {
        ct++;
        int x = q.front();
        q.pop();

        cout << x << " ";

        for(auto i : adj[x]){
            indeg[i]--;
            if(indeg[i] == 0)
                q.push(i);
        }
    }
 
}
//Driver Code 
int main(){

    // making graph
    int n,m;
    cin >> n >> m;
    vii adj(n+1);
    vi indeg(n,0);

    rep( i, 0, m ) {
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        indeg[y]++;
    }
    // PrintGraph(adj);
    rep( i, 1, m+1 ) {
    
        cout << i << " " << indeg[i] << endl;
    }
    TopoLogicalSort(adj,indeg);
       
    return 0;
}