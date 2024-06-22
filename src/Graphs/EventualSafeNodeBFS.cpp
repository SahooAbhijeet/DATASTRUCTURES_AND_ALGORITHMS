// This problem can be solved using the topological sort as whose outdegree = 0 that nodes are said to be terminal node and the terminal nodes are the only  safe node but in topo. sort we have to deal with indegreee of node . So first of all we will reverse the graph and now whose indegree = 0 those node are said to be terminal node and also they would be considered as safe node 

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        vector<int> adjRev[V];
        int indegree[V] = {0};
        for(int i = 0; i < V; i++) {
            for(auto it: adj[i]){ // i--> it
                adjRev[it].push_back(i);
                indegree[i]++;
            }
        }

        queue<int> q;
        vector<int> safeNodes;
        for(int i = 0; i< V; i++) {
            if(indegree[i] == 0) {
                q.push(i);
            }
        }

        while(!q.empty()) {
            int node = q.front();
            q.pop();
            safeNodes.push_back(node);
            for(auto it: adjRev[node]) {
                indegree[it]--;
                if(indegree[it] == 0) 
                q.push(it);
            }
        }
        sort(safeNodes.begin(),safeNodes.end());
        return safeNodes;
    }
};

int main() {

    vector<int> adj[12] = 
    {
        {1}, {2}, {3, 4}, {4, 5}, {6}, {6}, {7}, {}, {1, 9}, {10},
		{8}, {9}
	};
    
	int V = 12;
    Solution obj;
    vector<int> ans = obj.eventualSafeNodes(V,adj);
    for(auto it: ans) {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}