// Write a C++ program to implement a Hash Table using Linear Probing for
// collision resolution.

#include <iostream>
using namespace std;

#define SIZE 10

class HashTable {
  int table[SIZE];

public:
  // Constructor
  HashTable() {
    for (int i = 0; i < SIZE; i++) {
      table[i] = -1;
    }
  }

  // Hash Function
  int hashFunction(int key) { return key % SIZE; }

  // Insert Function using Linear Probing
  void insert(int key) {
    int index = hashFunction(key);

    // Linear Probing
    while (table[index] != -1) {
      index = (index + 1) % SIZE;
    }

    table[index] = key;
  }

  // Display Function
  void display() {
    cout << "\nHash Table:\n";
    for (int i = 0; i < SIZE; i++) {
      cout << i << " --> ";

      if (table[i] == -1)
        cout << "Empty";
      else
        cout << table[i];

      cout << endl;
    }
  }
};

int main() {
  HashTable h;

  int n, key;

  cout << "Enter number of elements: ";
  cin >> n;

  cout << "Enter elements:\n";
  for (int i = 0; i < n; i++) {
    cin >> key;
    h.insert(key);
  }

  h.display();

  return 0;
}