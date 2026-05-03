// What is STL ?
//  STL is a library of C++ that provides various data structures and
//  algorithms. STL is a collection of templates. STL stands for Standard
//  Template Library. It is a collection of generic classes and functions.

// STL has 3 components :
// 1. Container
// 2. Iterator
// 3. Algorithm

// 1. Container
// It is a data structure that stores elements.
// It is a collection of elements. It can store any type of elements.
// It is a template class.
// Example: vector, list, queue, stack, set, map, etc.

// There are two types of containers:
// 1. Sequence Container
// 2. Associative Container
// 3. Container Adapter

// 1. Sequence Container
// It is a data structure that stores elements in a sequence.
// It is a collection of elements.
// It is a template class.
// Example: vector, list, deque, etc.

// 2. Associative Container
// It is a data structure that stores elements in a sorted order.
// It is a collection of elements.
// It is a template class.
// Example: set, map, etc.

// 3. Container Adapter
// It is a data structure that stores elements in a stack or queue order.
// It is a collection of elements.
// It is a template class.
// Example: stack, queue, etc.

// 2. Iterator
// It is an object that points to an element in a container.
// It is a template class.
// Example: vector iterator, list iterator, etc.

// 3. Algorithm
// It is a function that performs an operation on a container.
// It is a template class.
// Example: sort, reverse, find, etc.

// Benefits of using STL:
// 1. Reusability
// 2. Efficiency
// 3. Easy to use
// 4. Type safety
// 5. Performance

// Example: vector
// vector is a template class that stores elements in a dynamic array.
// It is a sequence container.
// Example: vector<int> v;
// vector<char> v;
// vector<string> v;
// vector<float> v;
// vector<double> v;

// #include <vector>

// int main() {
//   vector<int> v;
//   v.push_back(1);
//   v.push_back(2);
//   v.push_back(3);
//   v.push_back(4);
//   v.push_back(5);

//   for (int i = 0; i < v.size(); i++) {
//     cout << v[i] << " ";
//   }
//   cout << endl;
//   return 0;
// }

// list is a container that stores elements in a doubly linked list.
// It is a sequence container.
// Example: list<int> l;
// list<char> l;
// list<string> l;
// list<float> l;
// list<double> l;

// #include <list>

// int main() {
//   list<int> l;
//   l.push_back(1);
//   l.push_back(2);
//   l.push_back(3);
//   l.push_back(4);
//   l.push_back(5);

//   for (int i = 0; i < l.size(); i++) {
//     cout << l[i] << " ";
//   }
//   cout << endl;
//   return 0;
// }