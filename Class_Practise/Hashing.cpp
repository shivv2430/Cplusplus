// Hashing : Hashing is a technique that converts data (keys) into a fixed-size
// value called a hash code using a hash function.
// Hash Function : A function that takes an input (or key) and returns an
// integer hash code.
// Hash table : A data structure that uses a hash function to compute an index
// into an array of buckets or slots, from which the desired value can be found.

// Collision : When two different keys hash to the same index

// collision resolution techniques
//  1.Separate Chaining : Each index stores a linked list
// Multiple elements can exist at the same index

// 2.Open Addressing: All elements are stored in the hash table itself
// Only one element can exist at each index

// Collision handled by probing or searching for next available slot

//  Linear Probing: Check next slot sequentially
//  Quadratic Probing: Check slots at quadratic intervals
//  Double Hashing: Use a second hash function to determine probe sequence
