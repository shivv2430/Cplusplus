#include <iostream>
#include <stack>
using namespace std;

int main() {
  string exp;
  cout << "Enter expression: ";
  cin >> exp;

  stack<char> st;
  bool balanced = true;

  for (int i = 0; i < exp.length(); i++) {
    char ch = exp[i];

    // Push opening brackets
    if (ch == '(' || ch == '{' || ch == '[') {
      st.push(ch);
    }
    // Check closing brackets
    else if (ch == ')' || ch == '}' || ch == ']') {
      if (st.empty()) {
        balanced = false;
        break;
      }

      char top = st.top();
      st.pop();

      if ((ch == ')' && top != '(') || (ch == '}' && top != '{') ||
          (ch == ']' && top != '[')) {
        balanced = false;
        break;
      }
    }
  }

  // If stack is not empty, opening brackets are left
  if (!st.empty()) {
    balanced = false;
  }

  if (balanced)
    cout << "Balanced Parentheses";
  else
    cout << "Not Balanced";

  return 0;
}