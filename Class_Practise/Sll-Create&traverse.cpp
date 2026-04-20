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

// Function to create a node
node *create_node(int value) {
  node *ptr;
  ptr = new node(value);
  return ptr;
}

// Function to create singly linked list
node *create_sll() {
  int value;
  cin >> value;

  node *ptr, *nptr, *start;

  ptr = create_node(value);
  start = ptr;

  int ch;
  cin >> ch; // ch = 1 (yes), 0 (no)

  while (ch == 1) {
    cin >> value;
    nptr = create_node(value);

    ptr->link = nptr;
    ptr = nptr;

    cin >> ch;
  }

  return start;
}

// Function to traverse and display list
void traverse(node *temp) {
  while (temp != NULL) {
    cout << temp->info << " ";
    temp = temp->link;
  }
}

// insert-at-beginning
void insert_beg(node *&start, int value) {
  node *nptr = create_node(value);
  nptr->link = start;
  start = nptr;
}

// insert-end
void insert_end(node *&start, int value) {
  node *nptr = create_node(value);
  node *ptr = start;
  while (ptr->link != NULL) {
    ptr = ptr->link;
  }
  ptr->link = nptr;
}
// insert-nth
void insert_nth(node *&start, int value, int n) {
  node *nptr = create_node(value);
  node *ptr = start;
  for (int i = 0; i < n - 1; i++) {
    ptr = ptr->link;
  }
  nptr->link = ptr->link;
  ptr->link = nptr;
}

// delete-beg
void delete_beg(node *&start) {
  node *ptr = start;
  start = start->link;
  delete ptr;
}

// delete-end
void delete_end(node *&start) {
  node *ptr = start;
  node *nptr = start;
  while (ptr->link != NULL) {
    ptr = ptr->link;
  }
  ptr->link = nptr;
}
// delete-nth
void delete_nth(node *&start, int n) {
  int loc, k;
  node *ptr = start;
  node *nptr = start;
  while (ptr->link != NULL) {
    ptr = ptr->link;
  }
  ptr->link = nptr;
}

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

// Main function
int main() {
  node *start;
  start = create_sll();

  traverse(start);

  insert_beg(start, 10);
  traverse(start);

  insert_end(start, 20);
  traverse(start);

  insert_nth(start, 30, 3);
  traverse(start);

  delete_beg(start);
  traverse(start);

  delete_end(start);
  traverse(start);

  delete_nth(start, 2);
  traverse(start);

  reverse(start);
  traverse(start);
  return 0;
}
