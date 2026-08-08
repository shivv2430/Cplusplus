// Problem-Statement : https://leetcode.com/problems/valid-parentheses/
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  bool isValid(string s) {
    vector<char> st;

    for (int i = 0; i < s.length(); i++) {
      char ch = s[i];

      if (ch == '(' || ch == '{' || ch == '[') {
        st.push_back(ch);
      } else {
        if (st.empty()) {
          return false;
        }

        if ((ch == ')' && st.back() == '(') ||
            (ch == '}' && st.back() == '{') ||
            (ch == ']' && st.back() == '[')) {

          st.pop_back();
        } else {
          return false;
        }
      }
    }

    return st.empty();
  }
};