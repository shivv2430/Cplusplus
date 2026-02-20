#include <iostream>
using namespace std;

int main() {
	int A[10],value,loc;
	for (int i=0;i<9;i++){
	    cin >> A[i];
	}
    cin>>loc>>value;
    for (int i=8;i>=loc-1;i--){
        A[i+1]=A[i];
    }
    A[loc-1]=value;
    for(int i=0;i<10;i++){
        cout<<A[i]<<" ";
    }
}
