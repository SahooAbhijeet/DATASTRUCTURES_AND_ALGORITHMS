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
    bool isLeaf(Node* root) {
        if(!root->left && !root->right) {
            return true;
        } else {
            return false;
        }
    }
    void printLeftBoundary(Node* root, vector<int> &res) {
        Node* curr = root->left;
        while(curr) {
           if(isLeaf(root)) {
            res.push_back(curr->data);
           }
           if(curr->left) {
            curr = curr->left;
           } else {
            curr = curr->right;
           }
        }
    }

    void printLeaf(Node*root, vector<int> &res) {
        if(isLeaf(root)) {
            res.push_back(root->data);
            return;
        }
        if(root->left){
            printLeaf(root->left,res);
        } else {
            printLeaf(root->right,res);
        }
    }

    void printRightBoundary(Node*root, vector<int> &res) {
        Node* curr = root->right;
        vector<int> temp;

        while(curr) {
            if(isLeaf(curr)) {
            temp.push_back(curr->data);
          }

          if(curr->right) {
            curr = curr->right;
          } else {
           curr = curr->left;
          }
        }

        for(int i = temp.size() -1; i >= 0;i--) {
            res.push_back(temp[i]);
        }
    }

    vector<int> printBoundary(Node* root) {
        vector<int> res;
        if(!root) {
            return res;
        }
        if(!isLeaf(root)) {
            res.push_back(root->data);
        }

        printLeftBoundary(root,res);
        printLeaf(root,res);
        printRightBoundary(root,res);
        return res;
    }
};

void printResult(vector<int> &result) {
    for(int val: result){
    cout << val << " ";
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
    vector<int> result = obj.printBoundary(root);
    printResult(result);
    return 0;
}