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

void insertAtTail(Node *&head, int val) {
  Node *newNode = new Node(val);
  if (head == NULL) {
    head = newNode;
    return;
  }
  Node *temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
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

bool compare(Node *head1, Node *head2) {
  Node *temp1 = head1;
  Node *temp2 = head2;
  while (temp1 != NULL && temp2 != NULL) {
    if (temp1->val != temp2->val) {
      return false;
    }
    temp1 = temp1->next;
    temp2 = temp2->next;
  }
  return temp1 == NULL && temp2 == NULL;
}
int main() {
  Node *head1 = NULL;
  Node *head2 = NULL;
  insertAtTail(head1, 1);
  insertAtTail(head1, 2);
  insertAtTail(head1, 3);
  insertAtTail(head2, 1);
  insertAtTail(head2, 2);
  insertAtTail(head2, 3);
  display(head1);
  display(head2);
  cout << compare(head1, head2) << endl;
}