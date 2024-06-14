#include<bits/stdc++.h>

using namespace std;

class Stack {
   queue<int> q1;
   queue<int> q2;


   public: 
   void Push(int x) {
    q2.push(x);
    if(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
    }
    swap(q1,q2);
   } 

int Pop() {
        int result = q1.front();
        q1.pop();

        return result;
    }
    
    int Top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};



int main() {
  Stack s;
  s.Push(3);
  s.Push(2);
  s.Push(4);
  s.Push(1);
  cout << "Top of the stack: " << s.Pop();

}