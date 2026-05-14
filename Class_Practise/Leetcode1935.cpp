#include <iostream>
#include <sstream>
#include <unordered_set>
using namespace std;

int main() {
  string text, brokenLetters;

  // Input
  getline(cin, text);
  getline(cin, brokenLetters);

  // Store broken letters in a set
  unordered_set<char> broken;
  for (char ch : brokenLetters) {
    broken.insert(ch);
  }

  stringstream ss(text);
  string word;
  int count = 0;

  // Check each word
  while (ss >> word) {
    bool canType = true;

    for (char ch : word) {
      if (broken.count(ch)) {
        canType = false;
        break;
      }
    }

    if (canType)
      count++;
  }

  // Output
  cout << count << endl;

  return 0;
}