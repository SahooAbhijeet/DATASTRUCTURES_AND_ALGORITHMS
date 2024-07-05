#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
    vector<int> topologicalSortingBFS(int V, vector<int> adj[]) {
        int indegree[V] = {0}; // calculates the indegree of graph
        for(int i=0;i<V;i++) {
            for(auto it: adj[i]) {
                indegree[it]++;
            }
        }
        queue<int> q; 
        for(int i=0;i<V;i++) {
            if(indegree[i] == 0) {
                q.push(i);
            }
        }

        vector<int> ans;
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            ans.push_back(node);

            for(auto it: adj[node]) {
                indegree[it]--;
                if(indegree[it] == 0) 
                    q.push(it);
            }
        }
        return ans;
    }
};


int main() {

    vector<int> adj[6] = {{}, {}, {3}, {1}, {0, 1}, {0, 2}};
    int V = 6;
    Solution obj;
    vector<int> ans = obj.topologicalSortingBFS(V,adj);
    for(auto it: ans) {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}
