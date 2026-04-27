#include <iostream>
using namespace std;

// Define Node
class Node {
public:
  int data;
  Node *next;

  // Constructor to create a node
  Node(int value) {
    data = value;
    next = NULL;
  }
};

void insertAtHead(Node *&head, int val) {
  Node *newNode = new Node(val); // create new node
  newNode->next = head;          // point to current head
  head = newNode;                // update head
}

int main() {
  // Create a single node
  Node *head = new Node(10);
  insertAtHead(head, 10);

  cout << "Data in node: " << head->data << endl;
  cout << "Next pointer: " << head->next << endl;

  return 0;
}
