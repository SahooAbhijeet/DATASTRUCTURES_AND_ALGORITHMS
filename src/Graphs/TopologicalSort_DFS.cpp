#include <bits/stdc++.h>

using namespace std;

class Solution {

    private:
    void dfs(int node, int vis[], vector<int> adj[], stack<int> &st) {
        vis[node] = 1;
        for(auto it: adj[node]) {
            if(!vis[it]) {
                dfs(it,vis,adj,st);
            }
        }
        st.push(node);
    }
    public:
    vector<int> topologicalSortDFS(int V, vector<int> adj[]) {
        int vis[V] = {0};
        stack<int> st;
        for(int i=0;i<V;i++) {
            if(!vis[i]) {
                dfs(i,vis,adj,st);
            }
        }

        vector<int> ans;
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};

int main() {
    vector<int> adj[6] = {{}, {}, {3}, {1}, {0, 1}, {0, 2}};
    int V = 6;
    Solution obj;
    vector<int> ans = obj.topologicalSortDFS(V,adj);
    for(auto it: ans) {
        cout << it << " ";
    }
     cout << endl;
    return 0; 
}

