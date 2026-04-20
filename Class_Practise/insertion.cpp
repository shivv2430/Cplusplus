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

node *create_node(int value) {
  node *ptr;
  ptr = new node(value);
  return ptr;
}

// insert-at-beginning
void insert_beg(node *&start, int value) {
  node *nptr = create_node(value);
  nptr->link = start;
  start = nptr;
}

// insert-end
void insert_end(node *&start, int value) {
  node *nptr = create_node(value);
  node *ptr = start;
  while (ptr->link != NULL) {
    ptr = ptr->link;
  }
  ptr->link = nptr;
}
// insert-nth
void insert_nth(node *&start, int value, int n) {
  node *nptr = create_node(value);
  node *ptr = start;
  for (int i = 0; i < n - 1; i++) {
    ptr = ptr->link;
  }
  nptr->link = ptr->link;
  ptr->link = nptr;
}
int main() {
  node *start;
  int value, loc;
  cin >> value >> loc;
  insert_beg(start, value);
  insert_end(start, value);
  insert_nth(start, value, loc);

  // int A[10],value,loc;
  // for (int i=0;i<9;i++){
  //     cin >> A[i];
  // }
  // cin>>loc>>value;
  // for (int i=8;i>=loc-1;i--){
  //     A[i+1]=A[i];
  // }
  // A[loc-1]=value;
  // for(int i=0;i<10;i++){
  //     cout<<A[i]<<" ";
  // }
}
