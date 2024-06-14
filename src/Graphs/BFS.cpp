#include <bits/stdc++.h>

using namespace std;

class Solution {
    public: 
    vector<int> bfsTraversal(int v, vector<int> adj[]) {
        int vis[v] = {0};  // make a visited array of size n and initialise it with 0
        vis[0]  = 1;
        queue<int> q;
        q.push(0);    // push the initial starting node 

        vector<int> bfs;
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            bfs.push_back(node);

            for(auto it: adj[node]) {// traversed all the neighbouring elements
                if(!vis[it]) {  // if the neighbour has previously not been visited, store in Q and mark as visited 
                    vis[it] = 1;
                    q.push(it);
                }t u, in
            }
        }
        return bfs;
    }
};


void addEdge(vector <int> adj[], int v) {
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
    vector <int> adj[6];
    
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 0, 4);

    Solution obj;
    vector <int> ans = obj.bfsTraversal(5, adj);
    printAns(ans);

    return 0;
}