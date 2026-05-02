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

void deleteAtHead(Node *&head) {
  Node *temp = head;
  head = head->next;
  delete temp;
}

void deleteAtTail(Node *&head) {
  Node *temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = NULL;
}

void deleteAtPosition(Node *&head, int k) {
  if (k == 0) {
    deleteAtHead(head);
    return;
  }
  Node *temp = head;
  int curr_pos = 0;
  while (curr_pos != k - 1) {
    temp = temp->next;
    curr_pos++;
  }
  temp->next = temp->next->next;
  delete temp->next;
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
  deleteAtHead(head);
  deleteAtTail(head);
  display(head);
  deleteAtPosition(head, 1);
  display(head);
}