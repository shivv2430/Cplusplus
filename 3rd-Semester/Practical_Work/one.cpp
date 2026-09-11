#include <cctype>
#include <iostream>
#include <string>
using namespace std;

class Stack {
private:
  int arr[100];
  int top;
  int size;

public:
  Stack(int s = 100) {
    size = s;
    top = -1;
  }
  void push(int value) {
    if (top == size - 1) {
      cout << "Stack Overflow!" << endl;
      return;
    }
    top++;
    arr[top] = value;
  }
  int pop() {
    if (top == -1) {
      cout << "Stack Underflow!" << endl;
      return -1;
    }
    int value = arr[top];
    top--;
    return value;
  }
  bool isEmpty() { return top == -1; }
  int peek() {
    if (top == -1) {
      return -1;
    }
    return arr[top];
  }
  void display() {
    if (top == -1) {
      cout << "Stack is empty." << endl;
      return;
    }

    cout << "Stack contents: ";
    for (int i = top; i >= 0; i--) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
};

int precedence(char op) {
  if (op == '^')
    return 3;
  if (op == '*' || op == '/')
    return 2;
  if (op == '+' || op == '-')
    return 1;
  return 0;
}

string infixToPostfix(string infix) {
  Stack s(100);
  string postfix = "";
  for (int i = 0; i < infix.length(); i++) {
    char ch = infix[i];
    if (isalnum(ch)) {
      postfix += ch;
    } else if (ch == '(') {
      s.push(ch);
    } else if (ch == ')') {
      while (!s.isEmpty() && s.peek() != '(') {
        postfix += (char)s.pop();
      }
      if (!s.isEmpty()) {
        s.pop();
      }
    } else {
      while (!s.isEmpty() && s.peek() != '(' &&
             precedence((char)s.peek()) >= precedence(ch)) {
        postfix += (char)s.pop();
      }
      s.push(ch);
    }
  }
  while (!s.isEmpty()) {
    postfix += (char)s.pop();
  }
  return postfix;
}

int calculate(int a, int b, char op) {
  if (op == '+')
    return a + b;
  if (op == '-')
    return a - b;
  if (op == '*')
    return a * b;
  if (op == '/')
    return a / b;
  return 0;
}

int evaluatePostfix(string postfix) {
  Stack s(100);
  for (int i = 0; i < postfix.length(); i++) {
    char ch = postfix[i];
    if (isdigit(ch)) {
      int number = ch - '0';
      s.push(number);
    } else {
      int b = s.pop();
      int a = s.pop();
      int result = calculate(a, b, ch);
      s.push(result);
    }
  }
  return s.pop();
}

int main() {
  cout << "----- STACK PUSH AND POP -----" << endl;
  int N;
  cout << "Enter size of stack: ";
  cin >> N;
  Stack s(N);
  int choice;
  int value;

  do {
    cout << "\n1. PUSH" << endl;
    cout << "2. POP" << endl;
    cout << "3. DISPLAY" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
      cout << "Enter value: ";
      cin >> value;
      s.push(value);
      break;
    case 2:
      value = s.pop();
      if (value != -1) {
        cout << "Deleted element: " << value << endl;
      }
      break;
    case 3:
      s.display();
      break;
    case 4:
      cout << "Exiting stack operations..." << endl;
      break;
    default:
      cout << "Invalid choice!" << endl;
    }
  } while (choice != 4);

  cout << "\n----- INFIX TO POSTFIX -----" << endl;
  string infix;
  cout << "Enter infix expression: ";
  cin >> infix;
  string postfix = infixToPostfix(infix);
  cout << "Postfix expression: " << postfix << endl;
  cout << "\n----- POSTFIX EVALUATION -----" << endl;
  int result = evaluatePostfix(postfix);
  cout << "Result: " << result << endl;
  return 0;
}