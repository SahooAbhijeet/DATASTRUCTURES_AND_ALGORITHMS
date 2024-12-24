#include <bits/stdc++.h> 
using namespace std;

// A linked list node
class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize a new node with data
    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

Node* sortList(Node* head) {
    if (!head || !(head->next)) 
        return head;
    Node* dummyZero = new Node(0);
    Node* dummyOne = new Node(0);
    Node* dummyTwo = new Node(0);

    Node* zero = dummyZero;
    Node* one = dummyOne;
    Node* two = dummyTwo;

    Node* curr = head;

    while(curr != NULL)  {
        if(curr->data == 0) {
            zero->next = curr;
            zero = zero->next;
        } else if(curr->data == 1) {
            one->next = curr;
            one = one->next;
        } else {
            two->next = curr;
            two = two->next;
        }
        curr = curr->next;
    }
        zero->next = (dummyOne->next)? dummyOne->next: dummyTwo->next;
        one->next = dummyTwo->next;
        two->next = NULL;

        head = dummyZero->next;
        delete(dummyZero);
        delete(dummyOne);
        delete(dummyTwo);
        
    
    return head;
}

void printList(Node* node) {
    while (node != nullptr) {
        cout << " " << node->data;
        node = node->next;
    }
      cout << "\n";
}

// Driver code
int main() {
  
    // Create a hard-coded linked list:
    // 1 -> 1 -> 2 -> 1 -> 0 -> NULL 
    Node* head = new Node(1);
    head->next = new Node(1);
    head->next->next = new Node(2);
    head->next->next->next = new Node(1);
    head->next->next->next->next = new Node(0);

    cout << "Linked List before Sorting:";
    printList(head);

    head = sortList(head);

    cout << "Linked List after Sorting:";
    printList(head);
    return 0;
}