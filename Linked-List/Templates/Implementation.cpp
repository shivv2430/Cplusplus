#include <iostream>
using namespace std;
template <typename T>

class Node { // template class name
public:
  T value;
  Node *next;
  Node(T data) {
    value = data;
    next = NULL;
  }
};
int main() {
  Node<int> *node1 = new Node<int>(10);
  cout << node1->value << endl;

  Node<char> *node2 = new Node<char>('A');
  cout << node2->value << endl;
}