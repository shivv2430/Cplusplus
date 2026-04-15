//Problem_Statement : https://www.codechef.com/problems/FOODRES
#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int A[N];
    int totalFood = 0;

    // input and total food
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        totalFood += A[i];
    }

    // if total food < people → 0 days
    if (totalFood < M) {
        cout << 0 << endl;
        return 0;
    }

    int maxDays = 0;

    // try all possible days
    for (int d = 1; d <= 10000; d++) {
        int people = 0;

        for (int i = 0; i < N; i++) {
            people += A[i] / d;
        }

        if (people >= M) {
            maxDays = d;
        } else {
            break; // no need to check further
        }
    }

    cout << maxDays << endl;

    return 0;
}