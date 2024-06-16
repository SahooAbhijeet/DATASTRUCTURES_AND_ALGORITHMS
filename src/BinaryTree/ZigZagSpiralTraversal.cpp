#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

class Solution {
    public:
     vector<vector<int>> ZigZagSpiral(Node* root) {
        vector<vector<int>> result;

        if(root == NULL) {
            return result;
        }

        queue<Node*> q;

        q.push(root);

        bool leftToRight = true;
        while(!q.empty()) {

            int size = q.size();

            vector<int> row(size);
            
            for(int i = 0; i < size; i++) {
                Node* node = q.front();
                q.pop();

            int index = leftToRight ? i : (size-1-i);

            row[index] = node->data;

            if(node->left) {
                q.push(node->left);
            }

            if(node->right) {
                q.push(node->right);
            }
            }

            leftToRight != leftToRight;

            result.push_back(row);
            }
        

        return result;
     }
};


void printResult(vector<vector<int>>& result) {
    for (auto& row : result) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}


int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    Solution obj;

   vector<vector<int>> result = obj.ZigZagSpiral(root);
   printResult(result);
   return 0;
}