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
    Node* LCA(Node* root, Node* p, Node* q) {
        if(root == NULL || root == p || root == q) {
            return root;
        }

        Node* left = LCA(root->left,p,q);
        Node* right = LCA(root->right,p,q);

        if(left == NULL) {
            return right;
        }

        else if(right == NULL) {
            return left;
        }
        else {
            return root;
        }
    }
};

int main() {

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    Solution obj;
    Node* result = obj.LCA(root,root->left,root->left->right);
    cout << "The Lowest Common Ancestor: " << result << endl;
    
    return 0;
}