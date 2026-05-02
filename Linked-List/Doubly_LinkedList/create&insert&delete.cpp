#include <iostream>
using namespace std;
class Node {
public:
  int data;
  Node *next;
  Node *prev;
  Node(int value) {
    data = value;
    next = NULL;
    prev = NULL;
  }
};
void display(Node *head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
}
void insertHead(Node *&head, int data) {
  Node *newNode = new Node(data);
  newNode->next = head;
  head->prev = newNode;
  head = newNode;
}
void insertTail(Node *&head, int data) {
  Node *newNode = new Node(data);
  Node *temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = newNode;
  newNode->prev = temp;
}
void insertPosition(Node *&head, int data, int pos) {
  Node *newNode = new Node(data);
  Node *temp = head;
  for (int i = 1; i < pos - 1; i++) {
    temp = temp->next;
  }
  newNode->next = temp->next;
  temp->next = newNode;
  newNode->prev = temp;
  temp->next->prev = newNode;
}
// deletion at head
void deleteHead(Node *&head) {
  Node *temp = head;
  head = head->next;
  head->prev = NULL;
  delete temp;
}
// deletion at tail
void deleteTail(Node *&head) {
  Node *temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->prev->next = NULL;
  delete temp;
}
// deletion at a given position
void deletePosition(Node *&head, int pos) {
  Node *temp = head;
  for (int i = 1; i < pos - 1; i++) {
    temp = temp->next;
  }
  temp->next = temp->next->next;
  temp->next->prev = temp;
  delete temp->next;
}
int main() {
  Node *head = new Node(10);
  insertHead(head, 20);
  insertTail(head, 30);
  insertPosition(head, 40, 2);
  display(head);
  deleteHead(head);
  display(head);
  deleteTail(head);
  display(head);
  deletePosition(head, 2);
  display(head);
}