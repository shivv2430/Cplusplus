#include <iostream>
using namespace std;

class Queue {
private:
  int arr[100];
  int front;
  int rear;
  int size;

public:
  Queue(int n) {
    size = n;
    front = -1;
    rear = -1;
  }
  void enqueue(int value) {
    if (rear == size - 1) {
      cout << "Queue Overflow!" << endl;
      return;
    }
    if (front == -1) {
      front = 0;
    }
    rear++;
    arr[rear] = value;
    cout << value << " inserted." << endl;
  }
  void dequeue() {
    if (front == -1 || front > rear) {
      cout << "Queue Underflow!" << endl;
      return;
    }
    cout << arr[front] << " deleted." << endl;
    front++;
    if (front > rear) {
      front = -1;
      rear = -1;
    }
  }
  void display() {
    if (front == -1) {
      cout << "Queue is empty." << endl;
      return;
    }
    cout << "Queue: ";
    for (int i = front; i <= rear; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
};

class CircularQueue {
private:
  int arr[100];
  int front;
  int rear;
  int size;

public:
  CircularQueue(int n) {
    size = n;
    front = -1;
    rear = -1;
  }
  void enqueue(int value) {
    if ((rear + 1) % size == front) {
      cout << "Circular Queue Overflow!" << endl;
      return;
    }
    if (front == -1) {
      front = 0;
      rear = 0;
    } else {
      rear = (rear + 1) % size;
    }
    arr[rear] = value;
    cout << value << " inserted." << endl;
  }
  void dequeue() {
    if (front == -1) {
      cout << "Circular Queue Underflow!" << endl;
      return;
    }
    cout << arr[front] << " deleted." << endl;
    if (front == rear) {
      front = -1;
      rear = -1;
    } else {
      front = (front + 1) % size;
    }
  }
  void display() {
    if (front == -1) {
      cout << "Circular Queue is empty." << endl;
      return;
    }
    cout << "Circular Queue: ";
    int i = front;
    while (true) {
      cout << arr[i] << " ";
      if (i == rear) {
        break;
      }
      i = (i + 1) % size;
    }
    cout << endl;
  }
};
int main() {
  int N;
  cout << "Enter size of queue: ";
  cin >> N;
  cout << "\n========== NORMAL QUEUE ==========\n";
  Queue q(N);
  int choice;
  int value;
  do {
    cout << "\n1. ENQUEUE" << endl;
    cout << "2. DEQUEUE" << endl;
    cout << "3. DISPLAY" << endl;
    cout << "4. EXIT" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) {
    case 1:
      cout << "Enter value: ";
      cin >> value;
      q.enqueue(value);
      break;
    case 2:
      q.dequeue();
      break;
    case 3:
      q.display();
      break;
    case 4:
      cout << "Exiting normal queue..." << endl;
      break;
    default:
      cout << "Invalid choice!" << endl;
    }
  } while (choice != 4);

  cout << "\n========== CIRCULAR QUEUE ==========\n";
  CircularQueue cq(N);
  do {
    cout << "\n1. ENQUEUE" << endl;
    cout << "2. DEQUEUE" << endl;
    cout << "3. DISPLAY" << endl;
    cout << "4. EXIT" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
      cout << "Enter value: ";
      cin >> value;
      cq.enqueue(value);
      break;
    case 2:
      cq.dequeue();
      break;
    case 3:
      cq.display();
      break;
    case 4:
      cout << "Exiting circular queue..." << endl;
      break;
    default:
      cout << "Invalid choice!" << endl;
    }
  } while (choice != 4);
  return 0;
}