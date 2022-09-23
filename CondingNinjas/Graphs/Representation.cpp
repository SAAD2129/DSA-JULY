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
const int N = 1e5+3;
const int MOD = 1e9 + 7;

/*
    ***    Saad a Peaceful soul ⭐⭐⭐⭐⭐⭐⭐ 😁 Zindagi me maza Aana Chahye Bs  ***  
*/

using namespace std;

//Driver Code 
int main(){

    int n,m;
    cin >> n >> m;

    // vii adj(n+1, vi(n+1,0));
    // rep( i, 0, m ) {
        
    //     int x,y;
    //     cin >> x >> y;
    //     adj[x][y] = 1;
    //     adj[y][x] = 1;
    // }
    // rep( i, 1, n+1 ) {
    
    //     rep( j, 1, n+1 ) 
    //         cout << adj[i][j] << " ";
    //     cout << endl;
    // }

    vi adjList[N];
    rep( i, 0, m ) {
    
        int x,y;
        cin >> x >> y;
        adjList[x].push_back(y);
        adjList[y].push_back(x);
    }

    rep( i, 1, n+1 ) {
        
        cout << i << " -> ";
        for(auto j : adjList[i]){
            cout << j << " ";
        } cout << endl;
    }
    return 0;
}