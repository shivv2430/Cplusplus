#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node *prev;
  Node(int value) {

    data = value;
    prev = NULL;
    next = NULL;
  }
};
int main() {
  Node *head = new Node(10);
  cout << head->data << endl;
}