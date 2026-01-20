#include <iostream>
using namespace std;

// Function to print Pascal's Triangle
void printPascal(int n) {
    for (int i = 0; i < n; i++) {

        // Print spaces for triangle shape
        for (int space = 1; space <= n - i; space++) {
            cout << " ";
        }

        int value = 1;  // First value of every row is 1

        for (int j = 0; j <= i; j++) {
            cout << value << " ";

            // Calculate next value
            value = value * (i - j) / (j + 1);
        }

        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    printPascal(n);   // function call

    return 0;
}
