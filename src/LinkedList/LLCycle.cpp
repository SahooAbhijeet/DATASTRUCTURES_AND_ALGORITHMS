#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    
    public:
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    public:
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

bool hasCycle(Node *head) {
    Node* slow = head;
    Node* fast = head;
    while(fast != nullptr || fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow){
            return true;
        } else {
            return false;
        }
    }
}

int main() {
        
}