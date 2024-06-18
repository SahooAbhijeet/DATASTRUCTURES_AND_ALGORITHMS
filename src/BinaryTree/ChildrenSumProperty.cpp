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
    void ChildrenSumProperty(Node* root) {
        if(root == NULL) {
            return;
        }
        int children = 0;
        if(root->left) {
            children+=root->left->data;        
        }
        if(root->right) {
            children+=root->right->data;
        }

        if(children >= root->data) {
            root->data = children;
        } else {
            if(root->left) {
                root->left->data = root->data;
            }

            if(root->right) {
                root->right->data = root->data;
            }
        }
        ChildrenSumProperty(root->left);
        ChildrenSumProperty(root->right);

        int total = 0;
        if(root->left) {
            total+=root->left->data;
        }
        if(root->right) {
            total+=root->right->data;
        }

        if(root->left || root->right) {
            root->data = total;
        }
    }
};

void printOrder(Node* root) {

    if(root == NULL) {
        return;
    }
    printOrder(root->left);
    cout << root->data << " ";
    printOrder(root->right);
}

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

    cout << "Traversal before Property: " << endl;
    printOrder(root);
    Solution obj;
    obj.ChildrenSumProperty(root);
    cout << endl;
    cout << "Traversal after property: " << endl;
    printOrder(root);
    return 0;
}