#include <iostream>
using namespace std;

int main() {
    int M;
    cin >> M;
    if (M > 90 && M <= 100) {
        cout << "A+ " << endl;
    } else if (M > 80 && M <= 90) {
        cout << "A " << endl;
    } else if (M > 70 && M <= 80) {
        cout << "B+ " << endl;
    } else if (M > 60 && M <= 70) {
        cout << "B " << endl;
    } else if (M > 50 && M < = 60) {
        cout << "C " << endl;
    } else if (M > 40 && M <= 50) {
        cout << "D " << endl;
    } else if (M >= 0 && M <= 40) {
        cout << "F" << endl;
    }
    return 0;
}