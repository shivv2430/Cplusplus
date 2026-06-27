// Problem-statement:https://www.codechef.com/problems/PALINLIST
#include <iostream>
#include <vector>
using namespace std;

struct Node {
  int data;
  Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

bool isPalindrome(Node *head) {
  vector<int> v;

  while (head != NULL) {
    v.push_back(head->data);
    head = head->next;
  }

  int i = 0, j = v.size() - 1;
  while (i < j) {
    if (v[i] != v[j])
      return false;
    i++;
    j--;
  }

  return true;
}

int main() {
  int N;
  cin >> N;

  Node *head = NULL, *tail = NULL;

  for (int i = 0; i < N; i++) {
    int x;
    cin >> x;
    Node *newNode = new Node(x);

    if (head == NULL) {
      head = tail = newNode;
    } else {
      tail->next = newNode;
      tail = newNode;
    }
  }

  if (isPalindrome(head))
    cout << "YES";
  else
    cout << "NO";

  return 0;
}