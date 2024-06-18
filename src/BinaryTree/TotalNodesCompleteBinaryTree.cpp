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
    int countNodes(Node* root) {
        if(root == NULL) {
            return 0;
        }
        int lh = leftTreeHeight(root);
        int rh = rightTreeHeight(root);

        if(lh == rh) { 
            return (pow(2,lh)) -1;
        }
        return 1+ countNodes(root->left) + countNodes(root->right);
    }

    int leftTreeHeight(Node* node) {
        int height = 0;
        while(node) {
            height++;
            node = node->left;
        }
            return height;
    }

    int rightTreeHeight(Node* node) {
        int height = 0;
        while(node) {
            height ++;
            node = node->right;
        }
        return height;
    }
};

int main() {

    Node* root = new Node(3);
    root->left = new Node(5);
    root->right = new Node(1);
    root->left->left = new Node(6);
    root->left->right = new Node(2);
    root->right->left = new Node(0);
    root->right->right = new Node(8);
    root->left->right->left = new Node(7);
    root->left->right->right = new Node(4);

    Solution obj;
    cout << obj.countNodes(root) << endl;
    return 0;
}