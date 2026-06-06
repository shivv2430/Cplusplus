//problem-statement: https://www.codechef.com/problems/RESELL
#include <iostream>
#include <vector>
#include <algorithm>
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

        sort(A.begin(), A.end(), greater<int>());

        long long profit = 0;

        for (int i = 0; i < N; i++) {
            if (i < K) {
                // Discounted items cost 5
                if (A[i] > 5) {
                    profit += (A[i] - 5);
                }
            } else {
                // Remaining items cost 10
                if (A[i] > 10) {
                    profit += (A[i] - 10);
                }
            }
        }

        cout << profit << "\n";
    }

    return 0;
}