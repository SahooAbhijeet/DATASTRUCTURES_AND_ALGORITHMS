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

    Node* middleNodeLL(Node* head) {
        if(head == NULL && head->next == NULL) {
            return head;
        }
        Node* temp = head;
        int cnt = 0;
        while(temp != NULL) {
            cnt++;
            temp = temp->next;
        }
        int midNode = cnt/2 + 1;
        temp = head;
        while(temp != NULL) {
            midNode--;
             if(midNode == 0) {
                break;           
        }
        temp = temp->next;
        }
        return temp; 
    }

    Node* TortoiseHareAlgo(Node* head) {
        Node* slow = head;
        Node* fast = head;
        
        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    Node* middleNode = middleNodeLL(head);
    cout << "The middle node value is: " << middleNode->data << endl;
    Node* middleNodeElement = TortoiseHareAlgo(head);
    cout << "The middle node value is: " << middleNodeElement->data << endl;
    return 0;
}
   