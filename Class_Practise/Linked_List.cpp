#include <iostream>
using namespace std;

class Node {
public:
  int info;
  Node *link;

  Node(int value) // constructor
  {
    info = value;
    link = nullptr;
  }
};

// Function to create a node
Node *Create_Node(int a) {
  Node *p = new Node(a);
  return p;
}

int main() {
  int n;
  cin >> n;

  Node *ptr;
  ptr = Create_Node(n);

  cout << ptr->info;

  return 0;
}