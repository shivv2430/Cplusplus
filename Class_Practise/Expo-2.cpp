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
  cin >> ch; // 1 = continue

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
    if (temp->coeff < 0) {
      cout << temp->coeff << "X^" << temp->expo;
    } else {
      cout << "+" << temp->coeff << "X^" << temp->expo;
    }
    temp = temp->link;
  }
}

int main() {
  node *start;
  start = Create_poly();
  traverse(start);
}