// Stack Implementation Using Vector
#include <iostream>
#include <vector>
using namespace std;
class Stack {
  vector<int> s;

public:
  void push(int x) { s.push_back(x); }
  void pop() {
    if (s.empty()) {
      cout << "Stack Underflow" << endl;
      return;
    }
    s.pop_back();
  }
  void display() {
    if (s.empty()) {
      cout << "Stack is Empty" << endl;
      return;
    }
    for (int i = s.size() - 1; i >= 0; i--) {
      cout << s[i] << " ";
    }
    cout << endl;
  }
  int peek() {
    if (s.empty()) {
      cout << "Stack Underflow" << endl;
      return -1;
    }
    return s.back();
  }
};
int main() {
  Stack s;
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