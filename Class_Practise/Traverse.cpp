#include <iostream>
using namespace std;
class node {
public:
  int info;
  node *link;

  node(int value) // constructor
  {
    info = value;
    link = NULL;
  }
};
void traverse(node *temp) {
  while (temp != NULL) {
    cout << temp->info << " ";
    temp = temp->link;
  }
}
int main() {
  node *start;
  start = NULL;
  traverse(start);
  return 0;
}
