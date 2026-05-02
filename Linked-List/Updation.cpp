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

void updateAtHead(Node *&head, int val) { head->val = val; }

void updateAtTail(Node *&head, int val) {
  Node *temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->val = val;
}

void updateAtPosition(Node *&head, int k, int val) {
  if (k == 0) {
    updateAtHead(head, val);
    return;
  }
  Node *temp = head;
  int curr_pos = 0;
  while (curr_pos != k - 1) {
    temp = temp->next;
    curr_pos++;
  }
  temp->next->val = val;
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
  updateAtHead(head, 1);
  updateAtTail(head, 2);
  display(head);
  updateAtPosition(head, 3, 1);
  display(head);
}