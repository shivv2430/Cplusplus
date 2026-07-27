// Problem-Statenent : https://www.codechef.com/DSAMONDAY013/problems/VACDI

#include <iostream>
using namespace std;

int main() {

  int N;
  cin >> N;

  int V[100000], P[100000];

  // Read vaccines
  for (int i = 0; i < N; i++) {
    cin >> V[i];
  }

  // Read patients
  for (int i = 0; i < N; i++) {
    cin >> P[i];
  }

  // Sort both arrays
  sort(V, V + N);
  sort(P, P + N);

  // Compare
  for (int i = 0; i < N; i++) {

    if (V[i] <= P[i]) {
      cout << "No";
      return 0;
    }
  }

  cout << "Yes";

  return 0;
}