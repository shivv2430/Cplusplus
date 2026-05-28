//problem-statement: https://www.codechef.com/problems/POINTT

#include <iostream>
using namespace std;

int main() {
    int X, Y, A, B;
    cin >> X >> Y >> A >> B;

    if (X > A) {
        cout << "Alice";
    }
    else if (A > X) {
        cout << "Bob";
    }
    else {
        // Primary scores are equal
        if (Y > B) {
            cout << "Alice";
        }
        else if (B > Y) {
            cout << "Bob";
        }
        else {
            // Both scores equal
            cout << "Alice";
        }
    }

    return 0;
}