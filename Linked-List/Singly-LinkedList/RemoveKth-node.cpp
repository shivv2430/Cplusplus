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
void removeKthNode(Node *&head, int k) {
  Node *ptr1 = head;
  Node *ptr2 = head;
  int count = k;
  while (count--) {
    ptr2 = ptr2->next;
  }

  for (int i = 0; i < k; i++) {
    ptr1 = ptr1->next;
  }
  while (ptr1 != NULL) {
    ptr1 = ptr1->next;
    ptr2 = ptr2->next;
  }
  ptr2->next = ptr2->next->next;
}
int main() {
  Node *head = NULL;
  display(head);
  removeKthNode(head, 2);
  display(head);
  return 0;
}