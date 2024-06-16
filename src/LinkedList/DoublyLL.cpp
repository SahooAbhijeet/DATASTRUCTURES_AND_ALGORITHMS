#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1, Node* next1, Node* back1 ) {
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

    Node* convertArrayToDoublyLL(vector<int> &arr) {
        Node* head = new Node(arr[0]);
        Node* prev = head;
        for(int i=0;i < arr.size(); i++) {
            Node* temp = new Node(arr[i], nullptr, prev);
            prev->next = temp;
            prev = temp;
        }
        return head;
    }

    void print2LL(Node* head) {
        while(head != NULL){
            cout << head -> data << endl;
            head = head-> next;
        }
    }

    int main(){
        vector<int> arr = {2,4,6,8,12,14};
        Node* head = convertArrayToDoublyLL(arr);
        print2LL(head);
    }