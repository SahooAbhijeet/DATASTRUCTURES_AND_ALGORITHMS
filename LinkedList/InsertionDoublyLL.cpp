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
        for(int i=1;i < arr.size(); i++) {
            Node* temp = new Node(arr[i], nullptr, prev);
            prev->next = temp;
            prev = temp;
        }
        return head;
    }

    void print2LL(Node* head) {
        while(head != NULL){
            cout << head->data << " ";
            head = head->next;
        }
    }

    Node* insertBeforeHead(Node* head, int val) {
        Node* newNode = new Node(val, head, nullptr);
        newNode->next = head;
        newNode->back = nullptr;
        return newNode;
    }

    Node* insertBeforeTail(Node* head, int val) {
        if(head->next == NULL) {
        return insertBeforeHead(head, val);
        }

        Node* tail = head;
        while(tail->next != NULL) {
            tail = tail->next;
        }
        Node* prev = tail->back;
        Node* newNode = new Node(val,tail,prev);
        prev->next = newNode;
        tail->back = newNode;
        return head;
    }

        Node* insertAfterTail(Node* head, int val) {
            if(head->next == NULL) {
                return insertBeforeHead(head, val);
            }
            Node* tail = head;
            while(tail->next != NULL) {
                tail = tail->next;
            }
            Node* prev = tail->back;
            Node* newNode = new Node(val,nullptr,tail);
            tail->next = newNode;
            return head;
        }

            Node* insertBeforeKElement(Node* head, int val, int k) {
                if(k == 1) {
                    return insertBeforeHead(head, val);
                }
                Node* temp = head;
                int cnt = 0;
                while(temp != NULL) {
                    cnt++;
                    if(cnt == k)
                    break;
                    temp = temp->next;
                }
                Node* prev = temp->back;
                Node* newNode = new Node(val, temp, prev);
                prev->next = newNode;
                temp->back = newNode;

                return head;
            }

            Node* insertAfterKElement(Node* head, int val, int k) {
                if(k == 1) {
                    return insertBeforeHead(head, val);
                }
                int cnt =0;
                Node* temp = head;
                while(temp != NULL) {
                    cnt++;
                    if(cnt == k) break;
                    temp = temp->next;
                }
                Node* front = temp->next;
                Node* newNode = new Node(val,front,temp);
                temp->next = newNode;
                front->back = newNode;
                return head;
            }

        int main(){
        vector<int> arr = {2,4,6,8,12,14,16};
        Node* head = convertArrayToDoublyLL(arr);
        head = insertAfterKElement(head, 10, 4);
        head = insertBeforeKElement(head, 10, 3);
        head = insertBeforeHead(head,10);
        head = insertBeforeTail(head,10);
        head = insertAfterTail(head,10);
        print2LL(head);
        return 0;
    }