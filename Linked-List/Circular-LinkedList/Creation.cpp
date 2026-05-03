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
class CircularLinkedList {
public:
  Node *head;
  Node *tail;
  CircularLinkedList() {
    head = NULL;
    tail = NULL;
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
void checkCircularLinkedList(Node *head) {
  Node *temp = head;
  while (temp->next != head) {
    temp = temp->next;
  }
  if (temp->next == head) {
    cout << "Circular Linked List" << endl;
  } else {
    cout << "Not a Circular Linked List" << endl;
  }
}

int main() {
  CircularLinkedList cll;

  display(cll.head);
}
