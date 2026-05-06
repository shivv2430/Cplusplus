// find the mid-point of the linked list

#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
};

Node *findMiddle(Node *head) {
  Node *slow = head;
  Node *fast = head;
  while (fast != NULL && fast->next != NULL) {
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow;
}

int main() {
  Node *head = NULL;
  Node *tail = NULL;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int data;
    cin >> data;
    Node *newNode = new Node(data);
    if (head == NULL) {
      head = newNode;
      tail = newNode;
    } else {
      tail->next = newNode;
      tail = newNode;
    }
  }
  Node *middle = findMiddle(head);
  cout << middle->data << endl;
  return 0;
}
