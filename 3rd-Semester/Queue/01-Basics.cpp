#include <iostream>
using namespace std;

class Queue {
  int *arr;
  int size;
  int front;
  int rear;

public:
  Queue() {
    size = 100;
    arr = new int[size];
    front = rear = -1;
  }

  // Enqueue (Insert)
  void enqueue(int x) {
    // Overflow condition
    if (rear == size - 1) {
      cout << "Queue Overflow" << endl;
      return;
    }

    // First element
    if (front == -1) {
      front = 0;
    }

    rear++;
    arr[rear] = x;
  }
};

// Dequeue (Delete)
void dequeue() {
  // Underflow condition
  if (front == -1 || front > rear) {
    cout << "Queue Underflow" << endl;
    return;
  }

  cout << "Deleted: " << arr[front] << endl;
  front++;

  // Reset queue when it becomes empty
  if (front > rear) {
    front = rear = -1;
  }
  // Display Queue
  void display() {
    if (isEmpty()) {
      cout << "Queue is Empty" << endl;
      return;
    }

    cout << "Queue: ";
    for (int i = front; i <= rear; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
}

int main() {
  Queue q;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  q.enqueue(5);
  q.display();
  q.dequeue();
  q.dequeue();
  q.dequeue();
  q.dequeue();
  q.dequeue();
  q.display();

  return 0;
}
