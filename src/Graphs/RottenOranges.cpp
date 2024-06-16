#include <bits/stdc++.h>

using namespace std;

class Solution {

    int rottenOranges(vector<vector<int>> &grid) {
        if(grid.empty()) return 0;

        queue<pair<pair<int,int>,int>> q; //{{r,c},t}
        vector<vector<int>> vis;
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(grid[i][j] == 2){
                    q.push({{i,j},0});
                    vis[i][j] = 2;
                } else {
                    vis[i][j] = 0;
                }
            }
        }

        int tm = 0;
        int drow = {-1,0,1,0};
        int dcol = {0,1,0,-1};
        int row = q.front().first.first;
        int col = q.front().first.second;
        int t = q.front().second;
        tm = max(t,tm);

        q.pop();
        for(int i=0;i<4;i++){
            int neighbourrow = row + drow;
            int neighbourcol = col + dcol;
            if(neighbourrow >= 0 && neighbourrow < n && neighbourcol >= 0 && neighbourcol < m && vis[neighbourrow][neighbourcol] != 2 && grid[neighbourrow][neighbourcol] == 1){
            q.push({{neighbourrow,neighbourcol},t+1});
            vis[neighbourrow][neighbourcol] = 2;

            }
        }

            for(int i=0;i<n;i++) {
                for(int j = 0;j<m;j++) {
                    if(vis[i][j] !=2 && grid[i][j] == 1){
                        return -1;
                    }
                }
            }
   return tm; 
    }  
    
};

int main() {
        vector<vector<int>> v{ {2,1,1} , {1,1,0} , {0,1,1} } ;
        int rotting = rottenOranges(v);
        cout<<"Minimum Number of Minutes Required "<<rotting<<endl;
        
    }