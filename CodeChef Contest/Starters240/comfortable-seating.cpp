//problem statement: https://www.codechef.com/problems/CYCYC

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        int mn = 101;

        for (int i = 0; i < N; i++) {
            cin >> A[i];
            mn = min(mn, A[i]);
        }

        int cnt = 0;
        for (int x : A) {
            if (x == mn) cnt++;
        }

        cout << (cnt >= 2 ? "YES" : "NO") << '\n';
    }

    return 0;
}