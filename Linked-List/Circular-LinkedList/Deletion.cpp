#include <iostream>
using namespace std;

class Node {
public:
  int value;
  Node *next;
  Node(int value) {
    value = value;
    next = NULL;
  }
};
void display(Node *head) {
  Node *temp = head;
  do {
    cout << temp->value << "->";
    temp = temp->next;
  } while (temp != head);
  cout << endl;
}
void insertAtHead(Node *&head, int value) {
  Node *newNode = new Node(value);
  if (head == NULL) {
    head = newNode;
    return;
  }
  Node *temp = head;
  while (temp->next != head) {
    temp = temp->next;
  }
  temp->next = newNode;
  newNode->next = head;
  head = newNode;
}
void insertAtTail(Node *&head, int value) {
  Node *newNode = new Node(value);
  if (head == NULL) {
    head = newNode;
    return;
  }
  Node *temp = head;
  while (temp->next != head) {
    temp = temp->next;
  }
  temp->next = newNode;
  newNode->next = head;
}
void insertAtPosition(Node *&head, int value, int position) {
  Node *newNode = new Node(value);
  if (head == NULL) {
    head = newNode;
    return;
  }
  Node *temp = head;
  for (int i = 1; i < position - 1; i++) {
    temp = temp->next;
  }
  newNode->next = temp->next;
  temp->next = newNode;
}
void deleteHead(Node *&head) {
  if (head == NULL) {
    return;
  }
  if (head->next == NULL) {
    delete head;
    return;
  }
  Node *temp = head;
  while (temp->next != head) {
    temp = temp->next;
  }
  temp->next = head->next;
  head = head->next;
  delete temp;
}
void deleteTail(Node *&head) {
  if (head == NULL) {
    return;
  }
  if (head->next == NULL) {
    delete head;
    return;
  }
  Node *temp = head;
  while (temp->next != head) {
    temp = temp->next;
  }
  temp->next = NULL;
  delete temp;
}
void deletePosition(Node *&head, int position) {
  Node *temp = head;
  for (int i = 1; i < position - 1; i++) {
    temp = temp->next;
  }
  Node *temp2 = temp->next;
  temp->next = temp->next->next;
  temp2->next = temp;
  delete temp2;
}
int main() {
  Node *head = NULL;
  insertAtHead(head, 10);
  insertAtHead(head, 20);
  insertAtHead(head, 30);
  insertAtTail(head, 40);
  insertAtPosition(head, 50, 3);
  display(head);
  deleteHead(head);
  deleteTail(head);
  deletePosition(head, 2);
  display(head);
}
