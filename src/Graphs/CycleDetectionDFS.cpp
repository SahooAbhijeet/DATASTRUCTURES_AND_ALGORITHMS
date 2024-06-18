#include <bits/stdc++.h>

using namespace std;

class Solution {

    bool dfs(int node, int parentNode,int vis[], vector<int> adj[]) {
        vis[node] = 1;

        for(auto adjacentNode: adj[node]) {
            if(!vis[adjacentNode]) {
                if(dfs(adjacentNode,node,vis,adj) == true) return true;
            }
            else if(adjacentNode != parentNode) return true;
        }
        return false;
    }

    public:
   bool isCycle(int V, vector<int> adj[]) {
        int vis[V] = {0};

        for(int i=0;i<V;i++) { // if there is connected components so for that we will have to use for loop to traverse for all nodes V.
            if(!vis[i]) {
                if(dfs(i,-1,vis,adj) == true)
                return true;
            }
        }
        return false;
   }
};

int main() {
    vector<int> adj[4] = {{}, {2}, {1, 3}, {2}};
    Solution obj;
    bool result = obj.isCycle(4,adj);
    if(result) {
        cout << "Cycle is present";
    }
    cout << "Cycle is not present";
}