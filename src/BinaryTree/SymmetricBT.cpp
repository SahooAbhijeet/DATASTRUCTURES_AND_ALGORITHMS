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
    bool isSymmetricalBT(Node* root1, Node* root2) {
        if(root1 == NULL || root2 == NULL) { //if one subtree is null then other must be null for symmetrical BT
            return root1 == root2;
        }

        return
        (
            (root1->data == root2->data) && 
            isSymmetricalBT(root1->left,root2->right) && 
            isSymmetricalBT(root1->right, root2->left)
        );
    }

    bool isSymmetrical(Node* root) {
        if(!root) { // An empty tree is also a symmetrical tree so return true
            return true;
        }

        return isSymmetricalBT(root->left, root->right);
    }
};


void printInOrder(Node* root) {
    if(!root) {
     return;
     
    }
    printInOrder(root->left);
    cout << root->data;
    printInOrder(root->right);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->right->right = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(4);

    cout << "BT-Inorder: " << " " ;
    printInOrder(root);

    Solution obj;

    bool result = obj.isSymmetrical(root);

    if(result) {
        cout << endl << "The Tree is symmetrical" << endl;
    } else {
        cout << "The tree is not symmetrical";
    }
    return 0;
}