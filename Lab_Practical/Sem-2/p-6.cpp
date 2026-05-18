// Write a C++ program to delete a node from a linked list and display the
// updated list.

#include <iostream>
using namespace std;

// Node structure
struct Node {
  int data;
  Node *next;
};

// Function to insert node at end
void insert(Node *&head, int value) {
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

// Function to delete a node
void deleteNode(Node *&head, int key) {
  if (head == NULL) {
    cout << "List is empty" << endl;
    return;
  }

  Node *temp = head;
  Node *prev = NULL;

  // If head node contains the key
  if (temp != NULL && temp->data == key) {
    head = temp->next;
    delete temp;
    return;
  }

  // Search for the key
  while (temp != NULL && temp->data != key) {
    prev = temp;
    temp = temp->next;
  }

  // If key not found
  if (temp == NULL) {
    cout << "Node not found" << endl;
    return;
  }

  // Delete node
  prev->next = temp->next;
  delete temp;
}

// Function to display linked list
void display(Node *head) {
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

  // Insert elements
  insert(head, 10);
  insert(head, 20);
  insert(head, 30);
  insert(head, 40);

  cout << "Original Linked List: ";
  display(head);

  // Delete node
  int value;
  cout << "Enter value to delete: ";
  cin >> value;

  deleteNode(head, value);

  cout << "Updated Linked List: ";
  display(head);

  return 0;
}