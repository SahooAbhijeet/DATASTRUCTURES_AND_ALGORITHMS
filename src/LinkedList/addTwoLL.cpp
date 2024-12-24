#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    Node(int data2) {
        data = data2;
        next = nullptr;
    }
};

Node* addTwo(Node* head1, Node* head2)