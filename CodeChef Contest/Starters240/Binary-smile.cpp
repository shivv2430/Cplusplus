//problem statement: https://www.codechef.com/problems/RVBS

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
        string A, B;

        cin >> N;
        cin >> A;
        cin >> B;

        vector<int> posA, posB;

        for (int i = 0; i < N; i++) {
            if (A[i] == '1') posA.push_back(i);
            if (B[i] == '1') posB.push_back(i);
        }

        if (posA.size() != posB.size()) {
            cout << -1 << '\n';
            continue;
        }

        int ans = 0;
        for (int i = 0; i < (int)posA.size(); i++) {
            if (posA[i] != posB[i]) ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}