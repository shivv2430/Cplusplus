//problem-statement: https://www.codechef.com/problems/NO3EQUAL

#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        string S;
        cin >> N >> S;

        int ans = 0;

        for (int i = 0; i < N; ) {
            int j = i;

            while (j < N && S[j] == S[i]) {
                j++;
            }

            int len = j - i;
            ans += len / 3;

            i = j;
        }

        cout << ans << "\n";
    }

    return 0;
}