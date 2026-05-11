#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> A(N), B(M);
  set<int> C, D;

  for (int i = 0; i < N; i++) {
    cin >> A[i];
    C.insert(A[i]);
  }

  for (int i = 0; i < M; i++) {
    cin >> B[i];
    D.insert(B[i]);
  }

  set<int> E, F;

  set_difference(C.begin(), C.end(), D.begin(), D.end(),
                 inserter(E, E.begin()));
  set_difference(D.begin(), D.end(), C.begin(), C.end(),
                 inserter(F, F.begin()));

  int P = E.size();
  int Q = F.size();

  cout << P * Q << endl;

  return 0;
}