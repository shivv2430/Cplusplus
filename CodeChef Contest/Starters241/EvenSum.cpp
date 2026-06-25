//problem-statement: https://www.codechef.com/problems/EVENSUM1

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        int sum = 0;

        for (int i = 0; i < N; i++) {
            cin >> A[i];
            sum += A[i];
        }

        bool possible = false;

        for (int x : A) {
            if ((x % 2) == (sum % 2)) {
                possible = true;
                break;
            }
        }

        cout << (possible ? "Yes" : "No") << '\n';
    }

    return 0;
}