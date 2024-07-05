#include <bits/stdc++.h>

using namespace std;

class Solution {

bool detectCycle(int src, vector<int> adj[], int vis[]) {
    vis[src] = 1;
    queue<pair<int,int>> q; // it stores source-node and its parent-node(parent-node refers from where the source node has come)
    q.push({src,-1});
    while(!q.empty()) {
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();

        for(auto adjacentNode: adj[node]) {
            //if adjacent node is not visited
            if(!vis[adjacentNode]) {
                vis[adjacentNode] = 1;
                q.push({adjacentNode, node});
            }
            else if(parent != adjacentNode) { // If someone(adjacentnode) is vsited and it didnot come from parent then there is a cycle 
                return true;
            }
        }
    }
    return false;
}
    public:
    bool isCycle(int V, vector<int> adj[]){
        int vis[V] = {0};
        for (int i = 0; i < V; i++){
            if (!vis[i]){
                if (detectCycle(i, adj, vis)){
                    return true;
                }
            }
            return false;
        }
    }
};

int main() {
    vector<int> adj[6] = {{}, {2}, {1, 3}, {2}, {2,3}, {4,5}};
    Solution obj;
    bool result = obj.isCycle(6,adj);
    if(result){
        cout << "Cycle is present" << endl;
    } else {
        cout << "Cycle is not present" << endl;
    }
    return 0;
}