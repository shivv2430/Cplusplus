#include <iostream>
using namespace std;

#define N 5

int front = -1;
int rear = -1;

void enqueueFront(int x) {
  if (front == -1 && rear == -1) {
    front = rear = 0;
  } else if ((rear + 1) % N == front) {
    cout << "Queue is full, Overflow" << endl;
  } else if (front == 0) {
    front = N - 1;
  } else {
    front = front - 1;
  }
}

void enqueueRear(int x) {
  if (front == -1 && rear == -1) {
    front = rear = 0;
  } else if ((rear + 1) % N == front) {
    cout << "Queue is full, Overflow" << endl;
  } else {
    rear = (rear + 1) % N;
  }
}

void display() {
  if (front == -1) {
    cout << "Deque is empty" << endl;
    return;
  }
}

int main() {
  enqueueFront(10);
  enqueueFront(20);
  enqueueRear(30);
  enqueueRear(40);

  display();

  return 0;
}