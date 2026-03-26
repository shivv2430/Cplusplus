#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int *A = new int[n];

    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    // Selection Sort
    for(int x = 0; x <= n-2; x++){
        int min = A[x];
        int loc = x;

        for(int y = x+1; y <= n-1; y++){
            if(A[y] < min){
                min = A[y];
                loc = y;
            }
        }

        // swap (correct place)
        int temp = A[x];
        A[x] = A[loc];
        A[loc] = temp;
    }

    // print once
    for(int i = 0; i < n; i++){
        cout << A[i] << " ";
    }

    delete[] A;

    return 0;
}