#include <iostream>
using namespace std;

// Node structure
struct Node {
  int data;
  Node *next;
};

// Function to traverse and display linked list
void traverse(Node *head) {
  Node *temp = head;

  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

int main() {
  // Creating nodes
  Node *first = new Node();
  Node *second = new Node();
  Node *third = new Node();

  // Assigning data
  first->data = 10;
  first->next = second;

  second->data = 20;
  second->next = third;

  third->data = 30;
  third->next = NULL;

  // Head pointer
  Node *head = first;

  cout << "Linked List Elements are: ";
  traverse(head);

  return 0;
}