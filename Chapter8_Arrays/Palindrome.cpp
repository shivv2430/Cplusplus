#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool isPalindrome = true;

    for(int i = 0; i < n/2; i++) {
        if(arr[i] != arr[n - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome)
        cout << "Array is Palindrome";
    else
        cout << "Array is NOT Palindrome";

    return 0;
}
