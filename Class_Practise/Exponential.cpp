#include <iostream>
using namespace std;

class node {
public:
  int coeff, expo;
  node *link;

  node(int a, int b) {
    coeff = a;
    expo = b;
    link = NULL;
  }
};

node *Create_node(int c, int e) { return new node(c, e); }

node *Create_poly() {
  int a, b;
  cin >> a >> b;

  node *ptr, *start, *nptr;
  ptr = Create_node(a, b);
  start = ptr;

  int ch;
  cin >> ch;

  while (ch == 1) {
    cin >> a >> b;
    nptr = Create_node(a, b);
    ptr->link = nptr;
    ptr = nptr;
    cin >> ch;
  }
  return start;
}

void traverse(node *start) {
  node *temp = start;

  while (temp != NULL) {
    cout << temp->coeff << "X^" << temp->expo;
    if (temp->link != NULL)
      cout << " + ";
    temp = temp->link;
  }
}

int main() {
  node *start;
  start = Create_poly();
  traverse(start);
}

// input:
//  3 4 1
//  2 3 1
//  5 2 1
//  6 1 1
//  7 0 0

// output:
// 3X^4 + 2X^3 + 5X^2 + 6X^1 + 7X^0