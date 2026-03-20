//Problem : https://www.codechef.com/problems/ALLEV
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int A[100];
        int oddCount = 0;

        for (int i = 0; i < N; i++) {
            cin >> A[i];
            if (A[i] % 2 == 1) {
                oddCount++;
            }
        }

        if (oddCount % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}