#include <iostream>
using namespace std;

int main() {
    int num, original, reverse = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    original = num;  // store original number

    while (num > 0) {
        digit = num % 10;          // get last digit
        reverse = reverse * 10 + digit;  // build reversed number
        num = num / 10;            // remove last digit
    }

    if (original == reverse) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}
