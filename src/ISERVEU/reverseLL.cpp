#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data2)
    {
        data = data2;
        next = nullptr;
    }
};

Node *reverseLL(Node *head)
{
    // stack<int> st;
    // Node *temp = head;
    // while (temp != NULL)
    // {
    //     st.push(temp->data);
    //     temp = temp->next;
    // }
    // temp = head;
    // while (temp != NULL)
    // {
    //     temp->data = st.top();
    //     st.pop();
    //     temp = temp->next;
    // }

    // return head;
    
    // RECURSIVE
    if(head == NULL || head->next == NULL) return head;
    Node* newNode = reverseLL(head->next);
    Node* front = head->next;
    front->next = head;
    head->next = NULL;
    return newNode;

}
void printLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data;
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    cout << "Initial LL: ";
    printLinkedList(head);
    head = reverseLL(head);
    cout << "Reversed LL: ";
    printLinkedList(head);

    return 0;
}