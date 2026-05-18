// Write a C++ program to perform search operation in a hash table using open
// addressing.

#include <iostream>
using namespace std;

#define SIZE 10

class HashTable {
  int table[SIZE];

public:
  HashTable() {
    for (int i = 0; i < SIZE; i++) {
      table[i] = -1;
    }
  }

  // Insert function
  void insert(int key) {
    int index = key % SIZE;

    while (table[index] != -1) {
      index = (index + 1) % SIZE;
    }

    table[index] = key;
  }

  // Search function
  void search(int key) {
    int index = key % SIZE;
    int start = index;

    while (table[index] != -1) {
      if (table[index] == key) {
        cout << "Element " << key << " found at index " << index << endl;
        return;
      }

      index = (index + 1) % SIZE;

      if (index == start)
        break;
    }

    cout << "Element " << key << " not found in hash table." << endl;
  }

  // Display function
  void display() {
    cout << "\nHash Table:\n";
    for (int i = 0; i < SIZE; i++) {
      cout << i << " --> " << table[i] << endl;
    }
  }
};

int main() {
  HashTable h;

  int n, key, searchKey;

  cout << "Enter number of elements: ";
  cin >> n;

  cout << "Enter elements:\n";
  for (int i = 0; i < n; i++) {
    cin >> key;
    h.insert(key);
  }

  h.display();

  cout << "\nEnter element to search: ";
  cin >> searchKey;

  h.search(searchKey);

  return 0;
}