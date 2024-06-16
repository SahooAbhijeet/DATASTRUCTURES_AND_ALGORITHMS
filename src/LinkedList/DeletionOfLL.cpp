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

    Node* deleteHead(Node* head) {
        if(head == NULL) {
            return head;
        }
        Node* temp = head;
        head = head-> next;
        free(temp);
        return head;

    }

    Node* deleteTail(Node* head) {
        if(head == NULL || head -> next == NULL) return NULL;
        Node* temp = head;
        while(temp -> next -> next != NULL) {
            temp = temp -> next;
        }
        free(temp -> next);
        temp -> next = nullptr;
        return head;
    }


    Node* deleteKElement(Node* head, int k) {

        if(head == NULL) return head;
 
        if(k == 1) {
            Node* temp = head;
            head = head -> next;
            free(temp);
            return head;
        }
        Node* temp = head;
        Node* prev = NULL;
        int cnt=0;
        while(temp) {
            cnt ++;
        
            if(cnt == k){
                prev -> next = prev -> next -> next;
                free(temp);
                break;
            }
            prev = temp;
            temp= temp -> next;
        }
        return head;
    }

    Node* deleteValueLL(Node* head, int el) {

        if(head == NULL) return head;
 
        if(head->data == el) {
            Node* temp = head;
            head = head -> next;
            free(temp);
            return head;
        }
        Node* temp = head;
        Node* prev = NULL;
        int cnt=0;
        while(temp) {
            cnt ++;
        
            if(temp->data == el){
                prev -> next = prev -> next -> next;
                free(temp);
                break;
            }
            prev = temp;
            temp= temp -> next;
        }
        return head;
    }
    


int main() {
    vector<int> arr = {2,4,6,8,5};
    Node* head = convertArrayToLinkedList(arr);
    head = deleteHead(head);
    head = deleteTail(head);
    head = deleteKElement(head, 2);
    head = deleteValueLL(head, 8);
    printLL(head) ;                    
    
   
}
    