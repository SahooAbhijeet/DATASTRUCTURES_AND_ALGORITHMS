#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data1, Node *next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* reverse(Node* head) {
    if(head == NULL || head->next == NULL) return head;
    Node* reverseLL = reverse(head->next);
    Node* front = head->next;
    front->next = head;
    head->next = NULL;
    return reverseLL;
}

bool isPallindrome(Node* head) {
    if(head == NULL || head->next == NULL) return head;
    Node* slow = head;
    Node* fast = head;
    while(fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
        Node* newHead = reverse(slow->next);
        Node* first = head;
        Node* second = newHead;
        while(second != NULL) {
            if(first->data != second->data) {
                reverse(newHead);
                return false;
            }
            first = first->next;
            second = second->next;
        }
        reverse(newHead);
        return true;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(5);
    head->next->next = new Node(2);
    head->next->next->next = new Node(5);
    head->next->next->next->next = new Node(1);

    if(isPallindrome(head)) {
        cout << "The following linkedlist is pallindrome: " << endl;
    } else cout << "Not pallindrome: " << endl;
    return 0;
}
