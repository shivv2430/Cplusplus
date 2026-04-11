// Problem Statment : https://www.codechef.com/problems/LMP2E
#include <iostream>
using namespace std;

int main() {
  int tc;
  cin >> tc;

  for (int t = 0; t < tc; t++) {
    int N, A, B;
    cin >> N >> A >> B;

    int wearCount = 0;
    bool jacketOn = false; // starts without jacket

    for (int i = 0; i < N; i++) {
      int temp;
      cin >> temp;

      if (temp < A) {
        if (jacketOn == false) {
          wearCount++;
          jacketOn = true;
        }
      } else if (temp > B) {
        jacketOn = false;
      }
    }

    cout << wearCount << endl;
  }

  return 0;
}