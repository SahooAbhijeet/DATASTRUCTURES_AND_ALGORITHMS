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
    int depthBinaryTree(Node* root) {
    if(root == NULL) {
        return 0;
    }
            
    int lh = depthBinaryTree(root->left);
    int rh = depthBinaryTree(root->right);

    return 1+ max(lh,rh);
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

    Solution depth;
    int result = depth.depthBinaryTree(root);
    cout << result; 

    return 0;
}


// int getMaxDepth(Node* root) {
//     queue<Node*> treeNodes;
// 	treeNodes.push(root);
// 	int depth = 0;
// 	while (!treeNodes.empty()) {
// 		depth++;
// 		int nodesAtCurrentLevel = treeNodes.size();
// 		while (nodesAtCurrentLevel > 0) {
// 			Node* currentNode = treeNodes.front();
// 			treeNodes.pop();
// 			if (currentNode->left != NULL) {
// 				treeNodes.push(currentNode->left);
// 			}
// 			if (currentNode->right != NULL) {
// 				treeNodes.push(currentNode->right);
// 			}
// 			nodesAtCurrentLevel--;
// 		}
// 	}
// 	return depth;
// }