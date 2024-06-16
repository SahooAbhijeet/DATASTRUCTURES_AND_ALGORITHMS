#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data1) {
        data = data1;
        left = nullptr;
        right = nullptr;
    }
};

class Solution {
    public:
    int diameterBinaryTree(Node* root) {
        int diameter = 0;

        height(root,diameter);

        return diameter;
    }

    private:
    int height(Node* node, int &diameter) {

        int maxi = 0;
        if(node == NULL) {
            return 0;
        }

        int lh = height(node->left, diameter);
        int rh = height(node->right, diameter);

        diameter = max(lh+rh, diameter);
        return 1+ max(lh,rh);
    }
};


int main() {
    // Creating a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->right = new Node(6);
    root->left->right->right->right = new Node(7);

    Solution sol;

    int result = sol.diameterBinaryTree(root);

    cout << result;

}