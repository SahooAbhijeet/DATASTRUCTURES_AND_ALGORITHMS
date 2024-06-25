#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int countPaths(int n, vector<vector<int>> &roads) {
        vector<pair<int,int>> adj[n];

        for(auto it: roads) {
            // As question suggessted undirected graph so have to take both front and back node
            adj[it[0]].push_back({it[1],it[2]});// {it[1],it[2]} -> it[1] is the adjacent front node and it[2] is the edge weight 
            adj[it[1]].push_back({it[0],it[2]}); //{it[0],it[2]} -> it[0] is the adjacent back node and it[2] is the edge weight 
        }

        //defining the priority queue
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        vector<int> dist(n,INT_MAX), ways(n,0);
        dist[0] = 0;
        ways[0] = 1;
        pq.push({0,0});

        int mod = (int)(1e9 +7);
        while(!pq.empty()) {
            int dist = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            for(auto it: adj[node]) {
                int adjacentNode = it.first;
                int edgeWeight = it.second;

                if(dist + edgeWeight < dist[adjacentNode]){
                    dist[adjacentNode] = dist + edgeWeight;
                    pq.push({dist+edgeWeight,adjacentNode});
                    ways[adjacentNode] = ways[node];
                }
                else if(dist + edgeWeight == dist[adjacentNode]) {
                    ways[adjacentNode] = (ways[node] + ways[adjacentNode])%mod;
                }

            }
        }
        return ways[n-1] % mod;
    }
};

int main() {
    
    int n = 7;
    vector<vector<int>> edges = {{0, 6, 7}, {0, 1, 2}, {1, 2, 3}, {1, 3, 3}, {6, 3, 3}, 
    {3, 5, 1}, {6, 5, 1}, {2, 5, 1}, {0, 4, 5}, {4, 6, 2}};

    Solution obj;
    int res = obj.countPaths(n,edges);
    cout << res << endl;
    return 0;
}