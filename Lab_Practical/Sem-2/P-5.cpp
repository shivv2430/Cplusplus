// Write a C++ program to create a Singly Linked List and perform insertion and
// traversal operations.

#include <iostream>
using namespace std;

// Node structure
struct Node {
  int data;
  Node *next;
};

// Function to insert a node at the beginning
void insertAtBeginning(Node *&head, int value) {
  Node *newNode = new Node(); // Create new node
  newNode->data = value;      // Assign data
  newNode->next = head;       // Point to current head
  head = newNode;             // Update head
}

// Function to insert a node at the end
void insertAtEnd(Node *&head, int value) {
  Node *newNode = new Node();
  newNode->data = value;
  newNode->next = NULL;

  if (head == NULL) {
    head = newNode;
    return;
  }

  Node *temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = newNode;
}

// Function to traverse and display the list
void traverse(Node *head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

// Main function
int main() {
  Node *head = NULL;

  // Insertion operations
  insertAtBeginning(head, 10);
  insertAtBeginning(head, 5);
  insertAtEnd(head, 20);
  insertAtEnd(head, 30);

  // Traversal
  cout << "Linked List: ";
  traverse(head);

  return 0;
}