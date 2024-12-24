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

Node* mergeTwoSortedLL(Node* list1, Node* list2) {
    Node* dummyNode = new Node(-1);
    Node* temp = dummyNode;

    while(list1 != NULL && list2 != NULL) {
        if(list1->data <= list2->data) {
            temp->next = list1;
            list1 = list1->next;
        } else {
            temp->next = list2;
            list2 = list2->next;
        }
        temp = temp->next;
    }

    if(list1 != NULL) {
        temp->next = list1;
        // temp = temp->next;
    } else {
        temp->next = list2;
    }

    return dummyNode->next;
}
Node* findMiddle(Node* head) {
    if(head == NULL || head->next == NULL) return head;
    Node* slow = head;
    Node* fast = head;
    while(fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* sortLL(Node* head) {
    if(head == NULL || head->next == NULL) return head;

    Node* middle = findMiddle(head);
    Node* right = middle->next;
    middle->next = NULL;
    Node* left = head;
    left = sortLL(left);
    right = sortLL(right);

    return mergeTwoSortedLL(left, right);
}


Node *printLinkedList(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data;
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(3);
    head->next = new Node(2);
    head->next->next = new Node(5);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(1);

    cout << "Original Linked List: ";
    printLinkedList(head);

    head = sortLL(head);

    cout << "Sorted Linked List: ";
    printLinkedList(head);

    return 0;
}