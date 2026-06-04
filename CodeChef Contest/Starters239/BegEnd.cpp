//problem- statement: https://www.codechef.com/problems/EQBEND
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> arr(N);

        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        int answer = 1e9; // large value

        // Try every pair of positions
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {

                // If values are equal, they can become first and last
                if (arr[i] == arr[j]) {

                    int swapsToFront = i;          // move arr[i] to index 0
                    int swapsToBack = N - 1 - j;  // move arr[j] to index N-1

                    int totalSwaps = swapsToFront + swapsToBack;

                    if (totalSwaps < answer) {
                        answer = totalSwaps;
                    }
                }
            }
        }

        if (answer == 1e9) {
            cout << -1 << endl;
        } else {
            cout << answer << endl;
        }
    }

    return 0;
}