// Problem Statement :-  https://www.codechef.com/practice/course/arrays/ARRAYS/problems/SEARCHINARR

#include <iostream>
using namespace std;

int main() {
    int N , X ;
	cin >> N >> X;
	
	int A[N];
	for(int i=0;i<N;i++){
	    cin>>A[i];
	}
	
	// Search the element
    for(int i = 0; i < N; i++) {
        if(A[i] == X) {
            cout << "YES";
            return 0;   // stop program if found
        }
    }

    // If not found
    cout << "NO";

    return 0;
}
