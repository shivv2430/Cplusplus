#include <cctype>
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

class Stack {
private:
  char arr[100];
  int top;

public:
  Stack() { top = -1; }
  void push(char value) {
    if (top == 99) {
      cout << "Stack Overflow!" << endl;
      return;
    }
    top++;
    arr[top] = value;
  }
  char pop() {
    if (top == -1) {
      return '\0';
    }
    char value = arr[top];
    top--;
    return value;
  }
  char peek() {
    if (top == -1) {
      return '\0';
    }
    return arr[top];
  }
  bool isEmpty() { return top == -1; }
};
class IntStack {
private:
  int arr[100];
  int top;

public:
  IntStack() { top = -1; }
  void push(int value) {
    if (top == 99) {
      cout << "Stack Overflow!" << endl;
      return;
    }
    top++;
    arr[top] = value;
  }
  int pop() {
    if (top == -1) {
      cout << "Stack Underflow!" << endl;
      return 0;
    }
    int value = arr[top];
    top--;
    return value;
  }
};
int precedence(char op) {
  if (op == '^') {
    return 3;
  }
  if (op == '*' || op == '/' || op == '%') {
    return 2;
  }
  if (op == '+' || op == '-') {
    return 1;
  }
  return 0;
}
string infixToPostfix(string infix) {
  Stack s;
  string postfix = "";
  for (int i = 0; i < infix.length(); i++) {
    char ch = infix[i];
    if (ch == ' ') {
      continue;
    }
    if (isdigit(ch)) {
      while (i < infix.length() && isdigit(infix[i])) {
        postfix += infix[i];
        i++;
      }
      postfix += ' ';
      i--;
    } else if (ch == '(') {
      s.push(ch);
    } else if (ch == ')') {
      while (!s.isEmpty() && s.peek() != '(') {
        postfix += s.pop();
        postfix += ' ';
      }
      if (!s.isEmpty()) {
        s.pop();
      }
    } else {
      while (!s.isEmpty() && s.peek() != '(' &&
             precedence(s.peek()) >= precedence(ch)) {
        postfix += s.pop();
        postfix += ' ';
      }
      s.push(ch);
    }
  }
  while (!s.isEmpty()) {
    postfix += s.pop();
    postfix += ' ';
  }
  return postfix;
}
int evaluatePostfix(string postfix) {
  IntStack s;
  for (int i = 0; i < postfix.length(); i++) {
    char ch = postfix[i];
    if (ch == ' ') {
      continue;
    }
    if (isdigit(ch)) {
      int number = 0;
      while (i < postfix.length() && isdigit(postfix[i])) {
        number = number * 10 + (postfix[i] - '0');
        i++;
      }
      s.push(number);
      i--;
    } else {
      int b = s.pop();
      int a = s.pop();
      int result;
      if (ch == '+') {
        result = a + b;
      } else if (ch == '-') {
        result = a - b;
      } else if (ch == '*') {
        result = a * b;
      } else if (ch == '/') {
        result = a / b;
      } else if (ch == '%') {
        result = a % b;
      } else if (ch == '^') {
        result = pow(a, b);
      }
      s.push(result);
    }
  }
  return s.pop();
}
int main() {
  string infix;
  cout << "Enter infix expression: ";
  getline(cin, infix);
  string postfix = infixToPostfix(infix);
  cout << "Postfix expression: " << postfix << endl;
  int result = evaluatePostfix(postfix);
  cout << "Final result: " << result << endl;
  return 0;
}