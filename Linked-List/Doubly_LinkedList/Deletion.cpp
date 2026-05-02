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

// deletion at head
void deleteHead(Node *&head) {
  if (head == NULL) {
    return;
  }
  if (head->next == NULL) {
    delete head;
    return;
  }
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
  deleteHead(head);
  deleteTail(head);
  deletePosition(head, 2);
}