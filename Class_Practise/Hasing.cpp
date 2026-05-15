#include <iostream>
using namespace std;

class HashTable {
public:
  int *table;
  int size;

  // Constructor
  HashTable(int S) {
    size = S;

    table = new int[size];

    for (int i = 0; i < size; i++) {
      table[i] = -1;
    }
  }

  // Insert function
  void insert(int key) {

    int index = key % size;
    int start = index;

    while (table[index] != -1) {

      index = (index + 1) % size;

      // Table full check
      if (index == start) {
        cout << "Hash table full" << endl;
        return;
      }
    }

    table[index] = key;
  }

  // Display function
  void display() {

    for (int i = 0; i < size; i++) {

      cout << i << " --> ";

      if (table[i] == -1) {
        cout << "empty";
      } else {
        cout << table[i];
      }

      cout << endl;
    }
  }
};

int main() {

  HashTable h(5);

  h.insert(10);
  h.insert(15);
  h.insert(20);
  h.insert(7);

  h.display();

  return 0;
}