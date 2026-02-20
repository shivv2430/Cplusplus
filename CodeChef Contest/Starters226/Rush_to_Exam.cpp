 //Problem_Statement :- https://www.codechef.com/problems/RUSHTOEXAM
#include <iostream>
using namespace std;

int main() {
	int N,M,A;
	cin >> N >> M >> A;
	
	if( M <= N * A ) {
	    cout << "Yes" << endl;
	}
	else{
	    cout << "No"<< endl;
	}

}
