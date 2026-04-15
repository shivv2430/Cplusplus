//problem-statement : https://www.codechef.com/problems/EQSUM
#include <iostream>
#include <map>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int A[N];

        // Input array
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        map<int, int> freq; // store frequency

        // Calculate A[i] - i and store count
        for (int i = 0; i < N; i++) {
            int value = A[i] - i;
            freq[value]++;
        }

        long long count = 0;

        // Count pairs
        for (auto it : freq) {
            int k = it.second;
            count += (long long)k * (k - 1) / 2;
        }

        cout << count << endl;
    }

    return 0;
}