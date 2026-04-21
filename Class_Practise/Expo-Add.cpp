#include <iostream>
using namespace std;

// 🔷 Node structure
class node {
public:
  int coeff, expo;
  node *link;

  node(int c, int e) {
    coeff = c;
    expo = e;
    link = NULL;
  }
};

// 🔷 Create polynomial (input)
node *create_poly() {
  int c, e;
  node *start = NULL, *ptr = NULL;

  // Input until 0 0
  while (true) {
    cin >> c >> e;
    if (c == 0 && e == 0)
      break;

    node *newNode = new node(c, e);

    if (start == NULL) {
      start = newNode;
      ptr = newNode;
    } else {
      ptr->link = newNode;
      ptr = newNode;
    }
  }
  return start;
}

// 🔷 Addition function
node *addition(node *start1, node *start2) {
  node *temp1 = start1, *temp2 = start2;
  node *start3 = NULL, *ptr = NULL;

  while (temp1 != NULL && temp2 != NULL) {
    int c, e;

    if (temp1->expo == temp2->expo) {
      c = temp1->coeff + temp2->coeff;
      e = temp1->expo;
      temp1 = temp1->link;
      temp2 = temp2->link;
    } else if (temp1->expo > temp2->expo) {
      c = temp1->coeff;
      e = temp1->expo;
      temp1 = temp1->link;
    } else {
      c = temp2->coeff;
      e = temp2->expo;
      temp2 = temp2->link;
    }

    if (c == 0)
      continue; // optional skip

    node *newNode = new node(c, e);

    if (start3 == NULL) {
      start3 = newNode;
      ptr = newNode;
    } else {
      ptr->link = newNode;
      ptr = newNode;
    }
  }

  // Remaining terms
  while (temp1 != NULL) {
    node *newNode = new node(temp1->coeff, temp1->expo);
    if (start3 == NULL) {
      start3 = newNode;
      ptr = newNode;
    } else {
      ptr->link = newNode;
      ptr = newNode;
    }
    temp1 = temp1->link;
  }

  while (temp2 != NULL) {
    node *newNode = new node(temp2->coeff, temp2->expo);
    if (start3 == NULL) {
      start3 = newNode;
      ptr = newNode;
    } else {
      ptr->link = newNode;
      ptr = newNode;
    }
    temp2 = temp2->link;
  }

  return start3;
}

// 🔷 Traverse (print result)
void traverse(node *start) {
  node *temp = start;
  while (temp != NULL) {
    cout << temp->coeff << " " << temp->expo << endl;
    temp = temp->link;
  }
}

// 🔷 Main function
int main() {
  node *poly1, *poly2, *result;

  // First polynomial
  poly1 = create_poly();

  // Second polynomial
  poly2 = create_poly();

  // Addition
  result = addition(poly1, poly2);

  // Output
  traverse(result);

  return 0;
}
// input :
//  3 4
//  2 3
//  5 2
//  6 1
//  0 0
//  7 4
//  1 2
//  0 0

// output
// 10 4
//  2 3
//  6 2
//  6 1