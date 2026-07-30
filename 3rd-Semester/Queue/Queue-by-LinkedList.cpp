#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int val) {
    data = val;
    next = NULL;
  }
};

class Queue {

  Node *front;
  Node *rear;

public:
  Queue() { front = rear = NULL; }

  void enqueue(int x) {

    Node *temp = new Node(x);

    if (front == NULL) {
      front = rear = temp;
      return;
    }

    rear->next = temp;
    rear = temp;
  }

  void dequeue() {

    if (front == NULL) {
      cout << "Queue Underflow" << endl;
      return;
    }

    Node *temp = front;

    cout << "Deleted: " << temp->data << endl;

    front = front->next;

    if (front == NULL) {
      rear = NULL;
    }

    delete temp;
  }

  void peek() {

    if (front == NULL) {
      cout << "Queue is Empty" << endl;
      return;
    }

    cout << "Front Element: " << front->data << endl;
  }

  void display() {

    if (front == NULL) {
      cout << "Queue is Empty" << endl;
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

  Queue q;

  q.enqueue(10);
  q.enqueue(20);
  q.enqueue(30);

  q.display();

  q.peek();

  q.dequeue();

  q.display();

  q.dequeue();
  q.dequeue();

  q.display();

  return 0;
}