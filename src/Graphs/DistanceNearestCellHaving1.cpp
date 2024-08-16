#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
    vector<vector<int>>nearest(vector<vector<int>>grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m,0));
        vector<vector<int>> dist(n, vector<int>(m,0));
        
        queue<pair<pair<int,int>,int>> q; //{{r,c},steps}
        for(int i =0;i<n;i++) {
            for(int j=0;j<m;j++) {

                if(grid[i][j] == 1) { //if on grid found 1 mark in visted matrix as 1
                    q.push({{i,j},0});
                    vis[i][j] = 1;
                }
                else {
                    vis[i][j] = 0; // mark visted matrix as 0 
                }
            }
        }

        int delrow[] = {-1,0,+1,0};
        int delcol[] = {0,+1,0,-1};

        while(!q.empty()) {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int steps = q.front().second;
            q.pop();

            dist[row][col] = steps; //keep the track of steps in distance matrix

            for(int i=0;i<4;i++) {
                int nrow = row + delrow[i]; //here nrow and ncol are neighbouring row and col
                int ncol = col + delcol[i];

                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] == 0) { //checks the validity of nrow and ncol
                    vis[nrow][ncol] = 1;
                    q.push({{nrow,ncol},steps+1});
                }
            }
        }
        return dist;
    }
};

int main() {
    vector<vector<int>>grid{
        {0,1,1,0},
        {1,1,0,0},
        {0,0,1,1}
    };

    Solution obj;
    vector<vector<int>> res = obj.nearest(grid);
    for(auto i:res) {
        for(auto j:i) {
            cout << j << " ";
        }
    }
    return 0;
}