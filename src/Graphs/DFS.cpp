#include <bits/stdc++.h>

using namespace std;

class Solution {
    private:
    void dfs(int node, int vis[], vector<int> adj[], vector<int> &ls) {
        vis[node] = 1;
        ls.push_back(node);
        for(auto it: adj[node]) {
            if(!vis[it]) {
                dfs(it,vis,adj,ls);
            }
        }
    }
    public:
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        int start = 0;
        int vis[V] = {0};
        vector<int> ls;
        dfs(start, vis, adj, ls);
        return ls;
    }
};

void addEdge(vector <int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printAns(vector <int> &ans) {
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}

int main() 
{
    vector <int> adj[5];
    
    addEdge(adj, 0, 2);
    addEdge(adj, 2, 4);
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 3);

    Solution obj;
    vector <int> ans = obj.dfsOfGraph(5, adj);
    printAns(ans);

    return 0;
}
