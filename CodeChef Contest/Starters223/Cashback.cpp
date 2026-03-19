//Problem Statement : https://www.codechef.com/problems/CASHBACK

#include <iostream>
using namespace std;

int main() {
	int cash;
    cout<<"Enter your cost price : ";
	cin>>cash;
	if(cash >200){
	    cout<<cash-50;
	}
	else 
	cout<<cash;

}
