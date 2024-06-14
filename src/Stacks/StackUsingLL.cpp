#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
    int data;
    Node* next;
    int size;

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

        Node(int data1) {
        data = data1;
        next = NULL;
    }
};

    class Stack {
        Node* top;
        int size;
        public:
         Stack() {
            top = NULL;
            size = 0;
         }

        void stackPush(int data) {
            Node* temp = new Node(data);
            temp->next = top;
            top = temp;
                cout << "Element pushed" << "\n";

            size++;
        }

        int stackSize() {
            return size;
        }

        bool stackIsEmpty() {
            if(top == NULL) {
                return true;
            }
            return false;
        }

        int stackPeek() {
            if (top == NULL){
                return -1;
            } 
            return top->data;
        }

        void printStack() {
            Node* temp = top;
            while(temp != NULL) {
                cout << temp->data << "";
                temp = temp->next;
            }
        }
    };


int main() {
  Stack s;
  s.stackPush(10);
  cout << "Stack size: " << s.stackSize() << "\n";
  cout <<"Stack empty or not "<<s.stackIsEmpty()<<"\n";
  cout << "Stack's top element: " << s.stackPeek() << "\n";
  return 0;
}
