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

    int lengthOfLL(Node* head) {
        int cnt = 0; 
        Node* temp = head;            
        while(temp) {                               
            cout << temp -> data << endl;// traversal of LL
            temp = temp -> next;
            cnt++;
        }
        return cnt;
    }

    int searchElementInLL(Node* head, int val) {
        Node* temp = head;
        while(temp) {
            if(temp -> data == val) 
            return 1;
            temp = temp -> next;
        }
        return 0;
    }

int main() {
    vector<int> arr = {2,4,6,8,12,14};
    Node* head = convertArrayToLinkedList(arr);
    cout << head->data << endl;
    cout << lengthOfLL(head) <<endl;
    cout << searchElementInLL(head, 40);
    printLL(head) ;
}
    