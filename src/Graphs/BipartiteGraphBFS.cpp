#include <bits/stdc++.h>

using namespace std;

class Solution {

    private:
    bool checkColoured(int start, int V, vector<int> adj[], int color[]) {
        queue<int> q;
        q.push(start);
        color[start] = 0;
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            for(auto it: adj[node]) {
           
                if(color[it] == -1) {
                    color[it] = !color[node];
                    q.push(it);
                }

                    else if(color[it] == color[node]) {
                    return false;
                }
            }
        }
        return true;
    }
    public:
    bool isBipartite(int V, vector<int>adj[]) {
        int color[V];
        for(int i=0;i<V;i++) 
            color[i] = -1;
            for(int i =0;i<V;i++) {
                if(color[i] == -1) {
                    if(checkColoured(i,V,adj,color) == false) {
                    return false;
                }
            }
            }
            return true;
    }
};

void addEdge(vector <int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main() {
    
    vector<int> adj[4];

	addEdge(adj, 0, 2);
   	addEdge(adj, 0, 3);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 1);

        Solution obj;
        bool res = obj.isBipartite(4, adj);
        if(res) {
            cout << "It is bipartite graph" << endl;
        } else {
            cout << "It is not bipartite graph" << endl;
        }

    return 0;
}