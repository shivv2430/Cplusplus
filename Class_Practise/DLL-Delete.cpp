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

// Delete from beginning
void deleteAtBeginning(Node *&head) {
  if (head == NULL) {
    cout << "List is empty\n";
    return;
  }

  Node *temp = head;
  head = head->next;

  if (head != NULL)
    head->prev = NULL;

  delete temp;
}

// Delete from end
void deleteAtEnd(Node *&head) {
  if (head == NULL) {
    cout << "List is empty\n";
    return;
  }

  Node *temp = head;

  // Only one node
  if (temp->next == NULL) {
    head = NULL;
    delete temp;
    return;
  }

  while (temp->next != NULL) {
    temp = temp->next;
  }

  temp->prev->next = NULL;
  delete temp;
}

// Delete at position (1-based index)
void deleteAtPosition(Node *&head, int pos) {
  if (head == NULL) {
    cout << "List is empty\n";
    return;
  }

  if (pos == 1) {
    deleteAtBeginning(head);
    return;
  }

  Node *temp = head;

  for (int i = 1; i < pos && temp != NULL; i++) {
    temp = temp->next;
  }

  if (temp == NULL) {
    cout << "Position out of range\n";
    return;
  }

  if (temp->next != NULL)
    temp->next->prev = temp->prev;

  if (temp->prev != NULL)
    temp->prev->next = temp->next;

  delete temp;
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

  // Create sample list
  head = new Node(10);
  Node *second = new Node(20);
  Node *third = new Node(30);

  head->next = second;
  second->prev = head;
  second->next = third;
  third->prev = second;

  display(head);

  deleteAtBeginning(head);
  display(head);

  deleteAtEnd(head);
  display(head);

  deleteAtPosition(head, 1);
  display(head);

  return 0;
}