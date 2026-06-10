// Write a C++ program to implement a Map and perform key-value operations with
// sorting.
#include <iostream>
#include <map>
using namespace std;

int main() {
  map<int, string> students;

  // Insert key-value pairs
  students[103] = "Rahul";
  students[101] = "Shivani";
  students[105] = "Aman";
  students[102] = "Priya";

  // Display map elements (sorted by key)
  cout << "Map Elements (Sorted by Key):" << endl;
  for (auto it = students.begin(); it != students.end(); it++) {
    cout << "Roll No: " << it->first << "  Name: " << it->second << endl;
  }

  // Find a key
  int key = 102;
  auto it = students.find(key);

  if (it != students.end()) {
    cout << "\nKey " << key << " found. Value = " << it->second << endl;
  } else {
    cout << "\nKey not found." << endl;
  }

  // Delete a key-value pair
  students.erase(103);

  cout << "\nAfter deleting key 103:" << endl;
  for (auto it = students.begin(); it != students.end(); it++) {
    cout << "Roll No: " << it->first << "  Name: " << it->second << endl;
  }

  return 0;
}