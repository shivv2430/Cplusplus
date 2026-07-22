// Stack-Basic Implementation

// Stack: works on principle of LIFO (Last In First Out)
// it has only one end

// stack-->
//          * Overflow(stack is full) --> too many values are inserted -->
//          condition is top>=n-1(pop operation)
//          * Underflow(stack is empty) --> too many values are deleted-->
//          condition is top==-1(push operation)

#include <iostream>
using namespace std;

int Stack[100];
int top = -1;

// Insertion
void push(int value, int size) {
  if (top == size - 1) {
    cout << "Stack Overflow , No more elements can be inserted!" << endl;
  } else {
    top++;
    Stack[top] = value;
  }
}

// Deletion
void pop() {
  if (top == -1) {
    cout << "Stack Underflow" << endl;
  } else {
    cout << "Element deleted: " << Stack[top] << endl;
    top--;
  }
}

int main() {
  int n;
  cin >> n;

  push(10, n);
  push(20, n);
  push(30, n);

  pop();

  return 0;
}