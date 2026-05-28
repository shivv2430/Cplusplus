//problem-statement: https://www.codechef.com/problems/EZSPK

#include <iostream>
using namespace std;

bool isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || 
            ch == 'o' || ch == 'u');
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        string S;

        cin >> N;
        cin >> S;

        int count = 0;
        bool hard = false;

        for (char ch : S) {
            if (!isVowel(ch)) {
                count++;
                if (count >= 4) {
                    hard = true;
                    break;
                }
            } else {
                count = 0;
            }
        }

        if (hard)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}