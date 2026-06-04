//problem-statement:https://www.codechef.com/problems/CYCLICXOR7

#include <iostream>
#include <vector>
using namespace std;

static const long long MOD = 998244353;

long long modpow(long long a, long long e) {
    long long r = 1;
    while (e) {
        if (e & 1) r = r * a % MOD;
        a = a * a % MOD;
        e >>= 1;
    }
    return r;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        long long N;
        int K;
        cin >> N >> K;

        int r = 0;
        long long odd = N;

        while ((odd & 1LL) == 0) {
            odd >>= 1;
            r++;
        }

        if (odd % 3 != 0) {
            cout << 1 << '\n';
            continue;
        }

        long long d = 1LL << (1 + min(r, K)); // 2^(1+min(r,K))
        long long exponent = d * K;

        cout << modpow(2, exponent) << '\n';
    }

    return 0;
}