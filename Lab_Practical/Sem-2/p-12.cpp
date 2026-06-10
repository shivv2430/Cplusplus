// Write a C++ program to Store, search, and sort student records using Map and
// Set.
#include <iostream>
#include <map>
#include <set>
#include <string>
using namespace std;

int main() {
  // Map to store Roll Number and Name
  map<int, string> students;

  // Insert student records
  students[101] = "Shivani";
  students[104] = "Rahul";
  students[102] = "Priya";
  students[103] = "Aman";

  // Display student records
  cout << "Student Records:" << endl;
  for (auto it = students.begin(); it != students.end(); it++) {
    cout << "Roll No: " << it->first << "  Name: " << it->second << endl;
  }

  // Search for a student by Roll Number
  int roll;
  cout << "\nEnter Roll Number to Search: ";
  cin >> roll;

  auto it = students.find(roll);

  if (it != students.end()) {
    cout << "Student Found: " << it->second << endl;
  } else {
    cout << "Student Not Found!" << endl;
  }

  // Store names in a Set for sorting
  set<string> sortedNames;

  for (auto it = students.begin(); it != students.end(); it++) {
    sortedNames.insert(it->second);
  }

  // Display sorted names
  cout << "\nStudent Names in Sorted Order:" << endl;
  for (auto name : sortedNames) {
    cout << name << endl;
  }

  return 0;
}