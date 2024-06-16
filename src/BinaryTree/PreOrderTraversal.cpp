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

    void preorder(Node* root, vector<int> &arr) {
        if(root == NULL) {
            return;
        }

        arr.push_back(root->data);
        preorder(root->left, arr);
        preorder(root->right, arr);
    }

    vector<int> preorder(Node* root){

        vector<int> arr;
        preorder(root, arr);
        return arr;
}

int main() {

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    vector<int> result = preorder(root);

    cout << "Preorder-Traversal: ";
    for(auto val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
