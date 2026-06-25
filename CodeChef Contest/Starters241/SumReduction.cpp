//problem-statememt: https://www.codechef.com/problems/SUMREDUCTION
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        long long mask = 0;
        bool ok = true;

        for (int i = 0; i < N; i++) {
            long long x;
            cin >> x;

            if (mask & x) ok = false;
            mask |= x;
        }

        cout << (ok ? "Yes" : "No") << '\n';
    }

    return 0;
}