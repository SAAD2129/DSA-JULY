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

vb visited(N,0);
vii adj;
vi components;


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

int get_comp(int idx){

    if(visited[idx])
        return 0;
    int ans = 1;
    visited[idx] = 1;
    for(auto i : adj[idx]){
        if(!visited[i]){
            ans += get_comp(i);
            visited[i] = 1;
        }
    }
    return ans;
}


//Driver Code 
int main(){

    adj = Graph();
    int n = adj.size();
    visited = vb(n);

    rep( i, 0, n )
        if(!visited[i])
            components.push_back(get_comp(i));

    for(auto i : components)
        cout << i << " ";
    return 0;
}