//Problem-Statement :-  https://www.codechef.com/problems/BANKGLITCH
#include<iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, X, Y;
        cin >> A >> B >> X >> Y;

        int trades = A / X;          // maximum possible trades
        int remaining1 = A - trades * X;
        int final2 = B + trades * Y;

        cout << remaining1 + final2 << endl;
    }

    return 0;
}