#include <vector>
#include <queue>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // Max heap to store points based on distance from origin
        priority_queue<pair<int, vector<int>>> maxHeap;

        // Insert points into the max-heap
        for (const auto& point : points) {
            int distance = point[0]*point[0] + point[1]*point[1];
            maxHeap.push({distance, point});
            if (maxHeap.size() > k) {
                maxHeap.pop(); // Maintain heap size of k
            }
        }

        // Extract k closest points from the max-heap
        vector<vector<int>> result;
        while (!maxHeap.empty()) {
            result.push_back(maxHeap.top().second);
            maxHeap.pop();





            
        }

        // Reverse the result because max-heap gives largest first
        reverse(result.begin(), result.end());

        return result;
    }
};
