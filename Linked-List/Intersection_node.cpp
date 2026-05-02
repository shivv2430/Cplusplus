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

int getLength(Node *head) {
  int length = 0;
  Node *temp = head;
  while (temp != NULL) {
    length++;
    temp = temp->next;
  }
  return length;
}

Node *getIntersectionNode(Node *head1, Node *head2) {
  int len1 = getLength(head1);
  int len2 = getLength(head2);
  Node *temp1 = head1;
  Node *temp2 = head2;
  if (len1 > len2) {
    for (int i = 0; i < len1 - len2; i++) {
      temp1 = temp1->next;
    }
  } else {
    for (int i = 0; i < len2 - len1; i++) {
      temp2 = temp2->next;
    }
  }
  while (temp1 != NULL && temp2 != NULL) {
    if (temp1 == temp2) {
      return temp1;
    }
    temp1 = temp1->next;
    temp2 = temp2->next;
  }
  return NULL;
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
  Node *head1 = new Node(1);
  head1->next = new Node(2);

  head1->next->next = new Node(3);
  Node *head2 = new Node(4);

  head2->next = new Node(5);
  head2->next->next = head1->next;

  display(head1);
  display(head2);

  Node *intersection = getIntersectionNode(head1, head2);

  if (intersection != NULL) {
    cout << intersection->val << endl;
  } else {
    cout << "No intersection" << endl;
  }
  return 0;
}
