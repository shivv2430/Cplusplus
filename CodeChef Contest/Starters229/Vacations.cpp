// Problem Statement: https://www.codechef.com/problems/VACAEX

#include <iostream>
using namespace std;
int main() {
  // N => no. of days
  // E => Excitement

  int N, E;
  cout << "Enter the no.of days left for vacations : ";
  cin >> N;
  cout << "Enter your excitement on day 1 : ";
  cin >> E;
  cout << "Your total excitement will be : ";
  cout << E + (N - 1) << endl;
}