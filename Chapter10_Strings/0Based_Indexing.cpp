#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 0) {
            cout << 'a';      // even index
        } else {
            cout << s[i];    // odd index → original character
        }
    }
    return 0;
}
