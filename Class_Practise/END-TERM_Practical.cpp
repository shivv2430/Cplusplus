#include <iostream>
using namespace std;

class HashTable {
  int table[10];
  int size;

public:
  HashTable() {
    size = 10;
    for (int i = 0; i < size; i++)
      table[i] = -1; // -1 indicates empty slot
  }

  // Hash Function
  int hashFunction(int key) { return key % size; }

  // Insert Element
  void insert(int key) {
    int index = hashFunction(key);
    int startIndex = index;

    while (table[index] != -1) {
      index = (index + 1) % size; // Linear Probing

      if (index == startIndex) {
        cout << "Hash Table is Full!\n";
        return;
      }
    }

    table[index] = key;
  }

  // Search Element
  void search(int key) {
    int index = hashFunction(key);
    int startIndex = index;

    while (table[index] != -1) {
      if (table[index] == key) {
        cout << "Element " << key << " found at index " << index << endl;
        return;
      }

      index = (index + 1) % size;

      if (index == startIndex)
        break;
    }

    cout << "Element not found!\n";
  }

  // Display Hash Table
  void display() {
    cout << "\nHash Table:\n";
    for (int i = 0; i < size; i++) {
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
  HashTable ht;

  ht.insert(15);
  ht.insert(25);
  ht.insert(35);
  ht.insert(20);
  ht.insert(30);

  ht.display();

  ht.search(25);
  ht.search(40);

  return 0;
}