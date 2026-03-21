//Problem: https://www.codechef.com/problems/BOP1

#include <iostream>
using namespace std;

int main() {
	int ABalloon,Bballoon;
	cin >>ABalloon>>Bballoon;
	
	if(ABalloon > Bballoon){
	    cout<<"Alice"<<endl;
	}
	
	else if (ABalloon == Bballoon){
	    cout<<"Draw"<<endl;
	}
	else if (ABalloon < Bballoon){
	cout<<"Bob"<<endl;
}
}
