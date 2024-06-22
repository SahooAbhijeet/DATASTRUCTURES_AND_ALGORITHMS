#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
    bool isCyclicDirected(int V, vector<int> adj[]) {
        int indegree[V] = {0};
        for(int i=0;i<V;i++) {
            for(auto it: adj[i]) {
                indegree[it]++;
            }
        }
        queue<int> q;
        for(int i = 0; i < V; i++) {
            if(indegree[i] == 0) {
                q.push(i);
            }
        }

        int cnt = 0;
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            cnt++;

            for(auto it: adj[node]) {
                indegree[it]--;
                if(indegree[it] == 0){
                    q.push(it);
                }
            }
        }
        if(cnt == V) { // if the count is equal to the no of nodes then the graph is acyclic but if it doesnot equal then the graph is cyclic
                return false;
            } else {
                return true;
            }
    }
};

int main() {

    vector<int> adj[6] = {{}, {}, {3}, {1}, {0, 1}, {0, 2}};
    int V = 6;
    Solution obj;
    bool ans = obj.isCyclicDirected(V,adj);
    cout << ans;
    return 0;
}
