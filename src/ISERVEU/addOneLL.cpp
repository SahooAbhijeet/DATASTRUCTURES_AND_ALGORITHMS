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

Node* reverse(Node* head) {
    if(head == NULL || head->next == NULL) return head;
    Node* newNode = reverse(head->next);
    Node* front = head->next;
    front->next = head;
    head->next = NULL;
    return newNode;
}

Node* addOne(Node* head) {
   head =  reverse(head);
    int carry = 1;
    Node* temp = head;
    while(temp != NULL) {
        temp->data = temp->data + carry;
        if(temp->data < 10) {
            carry = 0;
            break;
        }
        else {
            temp->data = 0;
            carry = 1;
        }
        temp = temp->next;
        if(carry == 1) {
            Node* newNode1 = new Node(1);
            head = reverse(head);
            newNode1->next = temp;
            return newNode1;
        }
        head = reverse(head);
        return head;
    }
}