#include <bits/stdc++.h>
using namespace std;

class Node {
    int data;
    Node* left;
    Node* right;

    Node(int data1) {
        data = data1;
        left = NULL;
        right = NULL;
    }

    Node(int data1, Node* left1, Node* right1) {
        data = data1;
        left = left1;
        right = right1;
    }
};

public:
vector<int> preorderTraversal(Node* root) {
    vector<int> preorder;
    
     if(root == nullptr) {
            return preorder;
        }

    stack<Node*> st;
    st.push(root);
    while(!st.empty()) {
        
        root = st.top();
        st.pop();
        
        preorder.push_back(root->data);

        if(root->right != NULL) {
            st.push(root->right);
        }

         if(root->left != NULL) {
            st.push(root->left);
        }
    }

    return preorder;
}

int main() {
    // Creating a binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    // Initializing the Solution class
    Node sol;

    // Getting the preorder traversal
    vector<int> result = sol.preorderTraversal(root);

    // Displaying the preorder traversal result
    cout << "Preorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}