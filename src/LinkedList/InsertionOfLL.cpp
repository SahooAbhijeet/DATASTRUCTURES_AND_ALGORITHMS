#include <bits/stdc++.h>

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
    

    Node* convertArrayToLinkedList(vector<int> &arr) {
        Node* head = new Node(arr[0]);
        Node* mover = head;
        for(int i = 1; i < arr.size(); i++) {
            Node* temp = new Node(arr[i]);
            mover->next = temp;
            mover = temp; 
        }
        return head;
    }

    void printLL(Node* head) {
        while(head != NULL) {
            cout << head -> data << endl;
            head = head -> next;
        }
    }

    Node* insertHead(Node* head, int val) {
        Node*temp = new Node(val, head);
        return temp;
    }

    Node* insertTail(Node* head, int val) {
        if(head == NULL) {
            return new Node(val);
        }
        Node* temp = head;
        while(temp -> next != NULL) {
            temp = temp -> next;
        }
           Node* newNode = new Node(val);
           temp -> next = newNode;
           return head;
    }
    int main() {  
    vector<int> arr = {2,4,6,8,5};
    Node* head = convertArrayToLinkedList(arr);
    head = insertHead(head, 1);
    head = insertTail(head,10);
    printLL(head) ;                    
}
    