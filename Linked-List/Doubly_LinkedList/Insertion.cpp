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
// insertion at head
void insertHead(Node *&head, int data) {
  Node *newNode = new Node(data);
  newNode->next = head;
  head->prev = newNode;
  head = newNode;
}
// insertion at tail
void insertTail(Node *&head, int data) {
  Node *newNode = new Node(data);
  Node *temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = newNode;
  newNode->prev = temp;
}
// insertion at a given position
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
int main() {
  Node *head = new Node(10);
  insertHead(head, 20);
  insertTail(head, 30);
  insertPosition(head, 40, 2);

  display(head);
}