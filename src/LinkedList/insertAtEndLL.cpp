#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    Node(int data2) {
        data = data2;
        next = nullptr;
    }
};

Node* insertAtTail(Node* head, int x) {
    Node* temp = head;
    Node* newNode = new Node(x);

    if (head == NULL) return newNode;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = NULL;
    return head;
}

Node* convertArrayToLinkedList(vector<int>& arr) {
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data;
        if (temp->next != NULL) cout << "->"; 
        temp = temp->next;
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* LL = convertArrayToLinkedList(arr);
    int x = 6;
    Node* newLL = insertAtTail(LL, x);
    printLinkedList(newLL);
    return 0;
}


//https://leetcode.com/problems/delete-node-in-a-linked-list/