#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	void shortest_distance(vector<vector<int>>&matrix) {
        int n = matrix.size();
        for(int i =0;i<n;i++) {
            for(int j =0;j<n;j++) {
                if(matrix[i][j] == -1) {
                    matrix[i][j] = 1e9;
                }
                if(i == j){
                    matrix[i][j] = 0;
                }
            }
        }
        for(int k = 0; k<n;k++) { // here the k is via so first we are going through via 0 through every node (row and col) then going through via 1 and then through via 2 and so on and so the ultimate matrix will obtained is the matrix with the shortest path to every node so k will also run from 0 to n.
            for(int i =0;i<n;i++) {
                for(int j=0;j<n;j++) {
                    matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j =0;j<n;j++) {
                if(matrix[i][j] == 1e9){
                    matrix[i][j] = -1;
                }
            }
        }
    }

};

int main() {

    int V = 4;
	vector<vector<int>> matrix(V, vector<int>(V, -1));
	matrix[0][1] = 2;
	matrix[1][0] = 1;
	matrix[1][2] = 3;
	matrix[3][0] = 3;
	matrix[3][1] = 5;
	matrix[3][2] = 4;

	Solution obj;
    obj.shortest_distance(matrix);
    for (auto row : matrix) {
		for (auto cell : row) {
			cout << cell << " ";
		}
		cout << endl;
	}
    return 0;
}