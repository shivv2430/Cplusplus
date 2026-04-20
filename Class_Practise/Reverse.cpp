#include <iostream>
using namespace std;
class node {
public:
  int info;
  node *link;

  node(int value) // constructor
  {
    info = value;
    link = NULL;
  }
};
void reverse(node *&start) {
  node *prev = NULL;
  node *curr = start;
  node *next = NULL;
  while (curr != NULL) {
    next = curr->link;
    curr->link = prev;
    prev = curr;
    curr = next;
  }
  start = prev;
}
int main() {
  node *start;
  start = NULL;
  reverse(start);
  return 0;
}
