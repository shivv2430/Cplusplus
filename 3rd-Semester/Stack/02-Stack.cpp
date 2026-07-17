#include <iostream>
using namespace std;
// Constructor
class Stack {
  // Private Data Members
  int Size;
  int top;
  int *arr;
  // Public Data Members
public:
  Stack(int size) {
    this->Size = size;
    top = -1;
    arr = new int[Size];
  }
  // Push Operation( Inserting element)
  void push(int x) {
    if (top == Size - 1) {
      cout << "Stack Overflow" << endl;
      return;
    } else {
      top++;
      arr[top] = x;
    }
  }
  // Pop Operation (Deleting element)
  void pop() {
    if (top == -1) {
      cout << "Stack Underflow" << endl;
      return;
    } else {
      top--;
    }
  }
  // Display Operation (Printing element)
  void display() {
    if (top == -1) {
      cout << "Stack is Empty" << endl;
      return;
    } else {
      for (int i = top; i >= 0; i--) {
        cout << arr[i] << " ";
      }
      cout << endl;
    }
  }
  // Peek Operation (Checking top element)
  int peek() {
    if (top == -1) {
      cout << "Stack Underflow" << endl;
      return -1;
    } else {
      return arr[top];
    }
  }
};

int main() {
  Stack s(5);
  s.push(10);
  s.push(20);
  s.push(30);
  s.display();
  s.peek();
  s.pop();
  s.pop();
  s.display();
  s.peek();
}