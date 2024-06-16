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
       bool isBalanced(Node* root) {
        return heightdfs(root) != -1;
       }


       int heightdfs(Node* root) {
        if(root == NULL) {
            return 0;
        }

        int lh = heightdfs(root->left);

        if(lh == -1) {
            return -1;
        }

        int rh = heightdfs(root->right);

        if(rh == -1) {
            return -1;
        }

        if(abs(lh-rh) > 1)
            return -1;

        return 1 + max(lh,rh);
    }
};

int main() {
Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->right = new Node(6);
    root->left->right->right->right = new Node(7);

    Solution sol;

    if(sol.isBalanced(root)) {
        cout << "Tree is balanced" << endl;
    }
    cout << "Tree is not balanced" << endl;
    
    return 0;
}
