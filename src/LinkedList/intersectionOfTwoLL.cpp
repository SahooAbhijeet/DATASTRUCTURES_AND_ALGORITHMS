#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1 ) {
        data = data1;
        next = next1;
    }
    Node(int data1) {
        data = data1;
        next = NULL;
    }
};

void insertNode(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) 
        temp = temp->next;
    temp->next = newNode;
    return;
}

Node* intersection(Node* head1, Node* head2) {
    Node* dummy1 = head1;
    Node* dummy2 = head2;
    while (dummy1 != dummy2) {
        dummy1 = (dummy1 == NULL) ? head2 : dummy1->next;
        dummy2 = (dummy2 == NULL) ? head1 : dummy2->next;
    }
    return dummy1;
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data;
        if (head->next != NULL) cout << "->";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head1 = nullptr;
    insertNode(head1, 1);
    insertNode(head1, 3);
    insertNode(head1, 1);
    insertNode(head1, 2);
    insertNode(head1, 4);

    Node* head2 = nullptr;
    insertNode(head2, 3);
    head2->next = head1->next->next->next; 

    cout << "List1: ";
    printList(head1);
    cout << "List2: ";
    printList(head2);

    Node* answerNode = intersection(head1, head2);
    if (answerNode == NULL)
        cout << "No intersection\n";
    else
        cout << "The intersection point is " << answerNode->data << endl;

    return 0;
}
