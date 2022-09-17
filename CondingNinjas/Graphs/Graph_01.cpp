#include <bits/stdc++.h>

/*
 *** Saad a Peaceful Soul ***
 */
using namespace std;
template <typename T>
class graph
{

public:
    map<T, vector<T>> adj;

    void adEdge(T u, T v, bool direction)
    {

        adj[u].push_back(v);
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void PrintListAdj()
    {

        for (auto i : adj)
        {

            cout << i.first << " -> ";
            for (auto j : i.second)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};

#include <bits/stdc++.h>

void printAdj(unordered_map<int, set<int>> &adj, vector<pair<int, int>> &edges)
{

    for (int i = 0; i < edges.size(); ++i)
    {

        int u = edges[i].first;  // 0
        int v = edges[i].second; // 1
        adj[u].insert(v);
        adj[v].insert(u);
    }
    for (auto i : adj)
    {

        cout << i.first << " -> ";
        for (auto j : i.second)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void bfs(unordered_map<int, set<int>> &adj, unordered_map<int, bool> &visited, vector<int> &ans, int node)
{
    queue<int> q;
    q.push(node);
    visited[node] = 1;

    while (!q.empty())
    {

        int front = q.front();
        q.pop();

        ans.push_back(front);

        for (auto i : adj[front])
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}
vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    unordered_map<int, set<int>> adj;
    vector<int> ans;
    unordered_map<int, bool> visited;
    printAdj(adj, edges);

    for (int i = 0; i < vertex; ++i)
    {
        if (!visited[i])
        {
            bfs(adj, visited, ans, i);
        }
    }
    return ans;
}

void dfs(int node, unordered_map<int, set<int>> &adjlist,
         unordered_map<int, bool> &visited, vector<int> &comp)
{

    comp.push_back(node);
    visited[node] = 1;
    for (auto i : adjlist[node])
    {
        if (!visited[i])
        {
            dfs(i, adjlist, visited, comp);
        }
    }
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    unordered_map<int, set<int>> adjlist;
    vector<vector<int>> ans;
    unordered_map<int, bool> visited;
    for (int i = 0; i < E; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adjlist[u].insert(v);
        adjlist[v].insert(u);
    }

    for(auto i : adjlist){
        cout << i.first << " -> ";
         for(auto j: i.second){
            cout << j << " ";
        }cout << endl;
    }
    for (int i = 0; i < V; i++)
    {

        if (!visited[i])
        {
            vector<int> comp;
            dfs(i, adjlist, visited, comp);
            ans.push_back(comp);
        }
    }//0 9 
    return ans;
}

bool isCyclicBfs(int node,unordered_map<int, bool>& visited,unordered_map<int,
                 set<int>> &adjlist){
    
    unordered_map<int, int> parent;
    parent[node] = -1;
    visited[node] = 1;
    queue<int> q;
    q.push(node);
    
    while(!q.empty()){
        
        int front = q.front();
        q.pop();
        
        for(auto neighbour : adjlist[front]){
            
            if(visited[neighbour] && neighbour != parent[front] )
                return true;
            else if(!visited[neighbour]){
                q.push(neighbour);
                visited[neighbour] = 1;
                parent[neighbour] = front;
            }
        }
    }
    return false;
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    unordered_map<int, set<int>> adjlist;
    unordered_map<int, bool> visited;
    for (int i = 0; i < m; i++)
    {
        int u = edges[i][0];
        // 1 -> 2 -> 3
        // 2 -> 1 -> 3
        // 3 -> 3 -> 1 
        int v = edges[i][1];

        adjlist[u].insert(v);
        adjlist[v].insert(u);
    }
    
    for(int i = 0; i < n; ++i){
        
        if(!visited[i]){
            bool check = isCyclicBfs(i,visited,adjlist);
                if(check)
                    return "Yes";
        }
        
    }
    return "No";
}


int main()
{

    int edge, nodes;
    cin >> nodes >> edge;

    graph<int> g;
    vector<vector<int>> edges;
    for (int i = 0; i < edge; i++)
    {
        int u, v;
        cin >> u >> v;
        vector<int> temp;
        temp.push_back(u);
        temp.push_back(v);

        edges.push_back(temp);
    }
    unordered_map<int,vector<int>> adjlist;
    for (int i = 0; i < edge; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    // vector<int> ans = BFS(nodes, edges);
    // cout << "Ans is " << endl;
    // for (auto i : ans)
    //     cout << i << ' ';
    // cout << endl;
    // g.PrintListAdj();
    vector<vector<int>> ans = depthFirstSearch(nodes,edge,edges);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     for (int j = 0; j < ans[i].size(); j++)
    //     {
    //         cout << ans[i][j] << " ";
    //     }cout << endl;
        
    // }
    

    return 0;
}