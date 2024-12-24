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

Node* middleLL(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while(fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next; 
    }
    return slow;
}



int main() {
Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    Node* middleNodeElement = middleLL(head);
    cout << middleNodeElement->data << " ";
return 0;
}
