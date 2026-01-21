#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    // Base condition
    if (n == 0)
        return 0;

    // Recursive relation
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum of digits = " << sumOfDigits(n);
    return 0;
}
