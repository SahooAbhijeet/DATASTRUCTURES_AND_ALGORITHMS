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

    Node* deleteHead(Node* head) {
        if(head == NULL || head->next == NULL) return NULL;
        Node*prev = head;
        head = head->next;

        head->back = nullptr;
        prev->next = nullptr;
        delete(prev);
        return head;
    }

    Node* deleteTail(Node* head) {
        if(head == NULL || head->next == NULL)
        return NULL;
        Node* tail = head;
        while(tail->next != NULL) {
            tail = tail->next;
        }
        Node* newTail = tail->back;
        newTail->next = nullptr;
        tail->back = nullptr;
        delete tail;
        return head;
    }

    Node* deleteKElementDoublyLL(Node* head, int k) {
        if(head == NULL) {
            return NULL;
        }
        int cnt = 1;
        Node* temp = head;
        while(temp != NULL){
            cnt++;
            if(cnt == k)
            break;
            temp = temp->next;
        }

        Node* prev = temp->back;
        Node* front = temp->next;
        if(prev == NULL && front == NULL) {
            return NULL;
        }
        else if(prev == NULL){
            deleteHead(head);
        }
        else if(front == NULL) {
            deleteTail(head);
        }
        prev->next = front;
        front->back = prev;

        temp->next = nullptr;
        temp->back = nullptr;
        free(temp);
        return head;
    }

    void deleteNodeLL(Node* temp){ //Node cannot be head to be deleted
        Node* prev = temp->back;
        Node* front = temp->next;

        if(front == NULL) {
            prev->next = nullptr;
            free(temp);
            return;
        }
        prev->next = front;
        front->back = prev;
        free(temp);
        temp->back = temp->next = nullptr;
    }
    
    int main(){
        vector<int> arr = {2,4,6,8,12,14,16};
        Node* head = convertArrayToDoublyLL(arr);
        head = deleteHead(head);
        head = deleteTail(head);
        head = deleteKElementDoublyLL(head, 4);
        deleteNodeLL(head->next->next->next->back);
        print2LL(head);
        return 0;
    }