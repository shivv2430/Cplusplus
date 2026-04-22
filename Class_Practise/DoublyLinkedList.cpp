#include <iostream>
using namespace std;

class node {
public:
  int info;
  node *prev, *next;

  node(int value) {
    info = value;
    prev = NULL;
    next = NULL;
  }
};

// Create a new node
node *create_node(int a) {
  node *ptr;
  ptr = new node(a);
  return ptr;
}

// Create doubly linked list
node *create_dll() {
  int value;
  cin >> value;

  node *ptr, *start, *nptr;
  ptr = create_node(value);
  start = ptr;

  int ch;
  cin >> ch;

  while (ch == 1) {
    cin >> value;

    nptr = create_node(value);
    nptr->prev = ptr;
    ptr->next = nptr;
    ptr = nptr;

    cin >> ch;
  }
  return start;
}

// Traverse and display list
void traverse(node *start) {
  node *temp;
  temp = start;

  while (temp != NULL) {
    cout << temp->info << " ";
    temp = temp->next;
  }
}

// Main function
int main() {
  node *start;

  start = create_dll();
  traverse(start);

  return 0;
}

// input :
//  2 1
//  3 1
//  4 0
// output : 2 3 4