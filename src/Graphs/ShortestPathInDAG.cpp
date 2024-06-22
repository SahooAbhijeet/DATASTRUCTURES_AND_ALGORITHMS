// 1. Calculate the topo sort any one BFS or DFS . Here we consider the DFS one 
// 2. Pop out the top of stack and maintain a distance array filled with the infinite value and call the adjacency element of top of stack with distance and if the distance is minimum of the distance in distance array replace that distance with the infinite value in distance array. Return the distance.

#include <bits/stdc++.h>
using namespace std;

class Solution {

    private:
    void topoSort(int node, int vis[], vector<pair<int,int>> adj[], stack<int> &st) {
        vis[node] = 1;
        for(auto it: adj[node]){
            int v = it.first;
            if(!vis[v]) {
                topoSort(v,vis,adj,st);
            }
        }
        st.push(node);
    }
    public:
     vector < int > shortestPathDAG(int N, int M, vector < vector < int >> & edges) {
        vector<pair<int,int>> adj[N];
        for(int i=0;i<M;i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        int weight = edges[i][2];

        adj[u].push_back({v,weight});
        }

        int vis[N] = {0};
        stack<int> st;
        for(int i=0;i<N;i++) {
            if(!vis[i]) {
                topoSort(i,vis,adj,st);
            }
        }

        vector<int> dist(N);
        for(int i=0;i<N;i++) {
            dist[i] = INT_MAX;
        }
        dist[0] = 0;
        while(!st.empty()){
            int node = st.top();
            st.pop();

            for(auto it: adj[node]) {
                int v = it.first;
                int weight = it.second;


                if(dist[node] + weight < dist[v]) { 
                    dist[v] = dist[node] + weight;
                /*
                * if the dist of node that is if we assume node 6 dist[node6] = 0 and thje weight which is the adjacency node weight here there are 2 adjacency node 4 and 5 let consider 4 first and its weight is 2 so dist[node6] + weight of node 4 = 2 and if this value is less than the dist of adjacency node that is node 4 . For now the nopde 4 dist is infinite in distance array so this value(dist[node6] + weight of node 4 = 2) is less than infinite so we will put this value in that distance array of that node in thi case this is node 4 . But if it is greater than the infinite value which could never happen leave that node  with the infinite value only and later after all iterations check the distance array which node have infinite value replace or initiali9se them with -1.
                */
                
                }
            }
        }

        for(int i =0 ;i<N;i++) {
            if(dist[i] == INT_MAX) {
                dist[i] = -1;
            }
        }
        return dist; 

     }
};
int main() {

  int N = 6, M = 7;
  
  vector<vector<int>> edges= {{0,1,2},{0,4,1},{4,5,4},{4,2,2},{1,2,3},{2,3,6},{5,3,1}};
  Solution obj;
  vector < int > res = obj.shortestPathDAG(N, M, edges);

  for (int i = 0; i < res.size(); i++) {

    cout << res[i] << " ";
  }

  return 0;

}