#include <bits/stdc++.h>

using namespace std;

class Stack {
    public: 
    int size;
    int* arr;
    int top;

    public:
    Stack() {
        size = 1000;
        arr = new int[size];
        top = -1;
    }

    void Push(int x) {
        top++;
        arr[top] = x;
    }

    int Pop() {
       int x = arr[top];
       top--;
       return x;
    }

    int Top() {
        return arr[top];
    } 

    int Size() {
        return top+1;
    }
};

int main() {
    Stack s;
    s.Push(2);
    s.Push(3);
    s.Push(4);
    cout << "The top element in stack is: " << s.Top() << endl;
    cout << "The element deleted in stack is: " << s.Pop() << endl;
    cout << "The size of stack is: " << s.Size() << endl;

    return 0;
}