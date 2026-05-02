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

void display(Node *head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->val << " ";
    temp = temp->next;
  }
  cout << endl;
}

void displayReverse(Node *head) {
  if (head == NULL) {
    return;
  }
  displayReverse(head->next);
  cout << head->val << " ";
}

int main() {
  Node *head = NULL;
  display(head);
  displayReverse(head);
}