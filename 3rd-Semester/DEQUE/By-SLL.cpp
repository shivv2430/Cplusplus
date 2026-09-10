#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node *prev;

  // Constructor
  Node(int value) {
    data = value;
    next = NULL;
    prev = NULL;
  }
};

class Deque {
private:
  Node *front;
  Node *rear;

public:
  // Constructor
  Deque() {
    front = NULL;
    rear = NULL;
  }

  // Insert from start
  void insertStart(int value) {
    Node *newNode = new Node(value);

    // If deque is empty
    if (front == NULL) {
      front = rear = newNode;
    } else {
      newNode->next = front;
      front->prev = newNode;
      front = newNode;
    }
  }

  // Insert from end
  void insertEnd(int value) {
    Node *newNode = new Node(value);

    // If deque is empty
    if (rear == NULL) {
      front = rear = newNode;
    } else {
      newNode->prev = rear;
      rear->next = newNode;
      rear = newNode;
    }
  }

  // Delete from start
  void deleteStart() {
    if (front == NULL) {
      cout << "Deque is empty!" << endl;
      return;
    }

    Node *temp = front;

    // If only one node is present
    if (front == rear) {
      front = rear = NULL;
    } else {
      front = front->next;
      front->prev = NULL;
    }

    delete temp;
  }

  // Delete from end
  void deleteEnd() {
    if (rear == NULL) {
      cout << "Deque is empty!" << endl;
      return;
    }

    Node *temp = rear;

    // If only one node is present
    if (front == rear) {
      front = rear = NULL;
    } else {
      rear = rear->prev;
      rear->next = NULL;
    }

    delete temp;
  }

  // Display deque
  void display() {
    if (front == NULL) {
      cout << "Deque is empty!" << endl;
      return;
    }

    Node *temp = front;

    while (temp != NULL) {
      cout << temp->data << " ";
      temp = temp->next;
    }

    cout << endl;
  }
};

int main() {
  Deque dq;

  dq.insertStart(10);
  dq.insertStart(20);
  dq.insertEnd(30);
  dq.insertEnd(40);

  cout << "Deque after insertion: ";
  dq.display();

  dq.deleteStart();

  cout << "After deletion from start: ";
  dq.display();

  dq.deleteEnd();

  cout << "After deletion from end: ";
  dq.display();

  return 0;
}