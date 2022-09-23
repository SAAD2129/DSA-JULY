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
        adj[y].push_back(x);
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


bool isCycle(int src, vii &adj, vb &visit, int parent){

    visit[src] = 1;// 0 1
    for(auto i : adj[src]){
        if(i != parent){
            if (visit[i])
                return 1;
            
            else if(visit[i] == 0 && isCycle(i,adj,visit,src))
                return 1;
        }
    }
    return 0;
}
bool DetectCycle(vii &adj){

    bool cycle = 0;
    int n = adj.size();
    vb visit(N,0);
    PrintGraph(adj);
    rep( i, 0, n ) {
        // !0 == 1
        // 0 1 
        if(visit[i] == 0 && isCycle(i,adj,visit,-1)){
            cycle = 1;
        }
    }
    return cycle;
}
//Driver Code 
int main(){

    vii adj = Graph();
    bool check = DetectCycle(adj);
    if(check)
        cout << "Cycle is Present" << endl;
    else
        cout << "Cycle is not Present" << endl;
    return 0;
}