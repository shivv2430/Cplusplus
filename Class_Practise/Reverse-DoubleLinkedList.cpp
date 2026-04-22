/*Reverse linked list:
Enter first value: 2
Enter values:
2 1
3 1
4 1
5 0
Original List: 2 3 4 5
Reversed List: 5 4 3 2 */
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
node *create_node(int a) { return new node(a); }

// Create doubly linked list
node *create_dll() {
  int value;
  cin >> value;

  node *start, *ptr, *nptr;

  ptr = create_node(value);
  start = ptr;

  int ch;
  cin >> ch;

  while (ch == 1) {
    cin >> value;

    nptr = create_node(value);

    ptr->next = nptr;
    nptr->prev = ptr;

    ptr = nptr;

    cin >> ch;
  }

  return start;
}

// Traverse list
void traverse(node *start) {
  node *temp = start;

  while (temp != NULL) {
    cout << temp->info << " ";
    temp = temp->next;
  }
}

// Reverse doubly linked list
node *reverse_dll(node *start) {
  node *temp = NULL;
  node *current = start;

  while (current != NULL) {
    // swap prev and next
    temp = current->prev;
    current->prev = current->next;
    current->next = temp;

    current = current->prev; // move forward
  }

  if (temp != NULL) {
    start = temp->prev;
  }

  return start;
}

// Main function
int main() {
  node *start;

  cout << "Enter first value: ";
  start = create_dll();

  cout << "\nOriginal List: ";
  traverse(start);

  start = reverse_dll(start);

  cout << "\nReversed List: ";
  traverse(start);

  return 0;
}