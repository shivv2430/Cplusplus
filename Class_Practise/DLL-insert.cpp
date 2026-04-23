#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *prev;
  Node *next;

  Node(int val) {
    data = val;
    prev = NULL;
    next = NULL;
  }
};

// Insert at beginning
void insertAtBeginning(Node *&head, int val) {
  Node *newNode = new Node(val);

  if (head == NULL) {
    head = newNode;
    return;
  }

  newNode->next = head;
  head->prev = newNode;
  head = newNode;
}

// Insert at end
void insertAtEnd(Node *&head, int val) {
  Node *newNode = new Node(val);

  if (head == NULL) {
    head = newNode;
    return;
  }

  Node *temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }

  temp->next = newNode;
  newNode->prev = temp;
}

// Insert at position (1-based index)
void insertAtPosition(Node *&head, int pos, int val) {
  if (pos == 1) {
    insertAtBeginning(head, val);
    return;
  }

  Node *newNode = new Node(val);
  Node *temp = head;

  for (int i = 1; i < pos - 1 && temp != NULL; i++) {
    temp = temp->next;
  }

  if (temp == NULL) {
    cout << "Position out of range\n";
    return;
  }

  newNode->next = temp->next;
  newNode->prev = temp;

  if (temp->next != NULL) {
    temp->next->prev = newNode;
  }

  temp->next = newNode;
}

// Display list
void display(Node *head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " <-> ";
    temp = temp->next;
  }
  cout << "NULL\n";
}

// Main function
int main() {
  Node *head = NULL;

  insertAtBeginning(head, 10);
  insertAtEnd(head, 20);
  insertAtEnd(head, 30);
  insertAtPosition(head, 2, 15);

  display(head);

  return 0;
}