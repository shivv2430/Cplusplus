// Problem-Statement : https://www.codechef.com/DSAMONDAY020/problems/GPCK
#include <iostream>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  if (A == B) {
    cout << A;
  } else {
    cout << std::min(A, B);
  }
}
