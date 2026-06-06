//problem-statement:https://www.codechef.com/problems/SHFSRT

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<long long> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        bool possible = true;

        for (int i = 0; i < N - 2; i++) {
            if (A[i] > A[i + 1] && A[i + 1] > A[i + 2]) {
                possible = false;
                break;
            }
        }

        if (possible)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}