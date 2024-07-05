#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data1) {
        data = data1;
        left = NULL;
        right = NULL;
    }
};

class Solution {
    public:
        vector<int> leftRightViewBT(Node* root) {
        vector<int> res;
        recursionApproach(root,0,res);
        return res;
    }
    private:
    void recursionApproach(Node* root, int level, vector<int> &res) {
        if(root == NULL) {
            return;
        }
        if(res.size() == level) {
            res.push_back(root->data);
            recursionApproach(root->right, level+1, res);
            recursionApproach(root->left, level+1, res);
        }
    }
};

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(10);
    root->left->left->right = new Node(5);
    root->left->left->right->right = new Node(6);
    root->right = new Node(3);
    root->right->right = new Node(10);
    root->right->left = new Node(9);

    Solution obj;

    vector<int> result = obj.leftRightViewBT(root);

    for(auto it: result) {
        cout << it << " ";
    }
    return 0;
}