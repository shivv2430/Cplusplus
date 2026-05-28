//Problem-statement: https://www.codechef.com/problems/COUNTAB
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        string S;

        cin >> N;
        cin >> S;

        int countA = 0, countB = 0;

        for (char ch : S) {
            if (ch == 'a')
                countA++;
            else
                countB++;
        }

        cout << countA << " " << countB << endl;
    }

    return 0;
}