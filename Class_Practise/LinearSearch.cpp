#include <iostream>
using namespace std;

int main() {

	int n;
	cin>>n;
	
	int A[n],x,a;
	
	for(x=0;x<=n;x++)
	{
	cin >> A[x];
	}
	
	cin >>a;
	
	for( x=0;x<n;x++)
	{
	if(A[x]==a)
	   break;
	
	}
	
	if (x==n){ 
	   cout << "-1";
	}
	else 
	{cout << x+1;}
}
// input 5 
// 10 20 15 12 11
// 12

//output -1


