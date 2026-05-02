#include <iostream>
using namespace std;

class Node {
public:
  int val;
  Node *next;

  Node(int data) {
    val = data;
    next = NULL;
  }
};
void insertAtHead(Node *&head, int val) {
  Node *newNode = new Node(val);
  newNode->next = head;
  head = newNode;
}
void insertAtTail(Node *&head, int val) {
  Node *newNode = new Node(val);
  Node *temp = head;

  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = newNode;
}

void insertAtPosition(Node *&head, int val, int pos) {
  if (pos == 0) {
    insertAtHead(head, val);
    return;
  }
  Node *newNode = new Node(val);
  Node *temp = head;
  int curr_pos = 0;

  while (curr_pos != pos - 1) {
    temp = temp->next;
    curr_pos++;
  }

  newNode->next = temp->next;
  temp->next = newNode;
}

void display(Node *head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->val << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main() {
  Node *head = NULL;
  insertAtHead(head, 1);
  insertAtTail(head, 2);
  display(head);
  insertAtPosition(head, 3, 1);
  display(head);
}