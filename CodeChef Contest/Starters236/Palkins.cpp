//problem-statement:https://www.codechef.com/problems/PALKINS

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int i = 0, j = N - 1;
        bool possible = true;

        while (i < j) {
            if (A[i] == A[j]) {
                i++;
                j--;
            }
            else if (A[i] == K) {
                i++;
            }
            else if (A[j] == K) {
                j--;
            }
            else {
                possible = false;
                break;
            }
        }

        cout << (possible ? "Yes" : "No") << '\n';
    }

    return 0;
}