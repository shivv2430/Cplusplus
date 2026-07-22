// Problem-statement : https://www.codechef.com/problems/PASS

#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int count60 = 0, count30 = 0;

    for (int i = 0; i < 5; i++) {
      int marks;
      cin >> marks;

      if (marks >= 60)
        count60++;

      if (marks >= 30)
        count30++;
    }

    if (count60 >= 2 && count30 >= 4)
      cout << "Pass" << endl;
    else
      cout << "Fail" << endl;
  }

  return 0;
}