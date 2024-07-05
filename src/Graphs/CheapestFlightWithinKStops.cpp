#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int CheapestFLight(int n, vector<vector<int>> &flights, int src, int dst, int K) {
        //First of all we have to create the adjacency list 
        vector<pair<int,int>> adj[n];
        for(auto it:flights) {
            adj[it[0]].push_back({it[1],it[2]});
        }

        queue<pair int,<pair<int,int>>> q;
        q.push(0,{src,0});
        vector<int> dist(n,INT_MAX);
        dist[src] = 0;

        while(!q.empty()) {
            auto it = q.front();
            q.pop();
            int stops = it.first;
            int node = it.second.first;
            int cost = it.second.second;

            while(stops > k) {
            continue;
            for(auto it1: adj[node]) {
                int adjacentNode = it.first;
                int edgeWidth = it.second;

                    if(cost + edgeWidth < dist[adjacentNode] && stops <= k) {
                        dist[adjacentNode] = cost + edgeWidth;
                        q.push(stops+1,{adjacentNode,cost+edgeWidth});
                    }
                }
            }
        }
    }
};