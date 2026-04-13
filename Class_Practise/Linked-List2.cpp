#include <iostream>
using namespace std;

class Node {
public:
  int info;
  Node *link;

  Node(int value) {
    info = value;
    link = nullptr;
  }
};

Node *Create_Node(int a) {
  Node *p = new Node(a);
  return p;
}

int main() {
  int n;

  // First node
  cin >> n;
  Node *start = Create_Node(n);

  // Second node
  cin >> n;
  Node *nptr = Create_Node(n);
  start->link = nptr;

  // Third node
  cin >> n;
  Node *cptr = Create_Node(n);
  nptr->link = cptr;

  // Traversing and printing
  Node *temp = start;
  while (temp != nullptr) {
    cout << temp->info << " ";
    temp = temp->link;
  }

  return 0;
}