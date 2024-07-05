#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source, pair<int, int> destination) {

        if(source.first == destination.first && source.second == destination.second) 
        return 0;
        queue<pair<int,pair<int,int>>> q;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dist(n,vector<int>(m,INT_MAX));
        dist[source.first,source.second] = 0;
        q.push({0,{source.first.source.second}});

        int dr[] = {-1,0,1,0};
        int dc[] = {0,1,0,-1};

        
    }
};