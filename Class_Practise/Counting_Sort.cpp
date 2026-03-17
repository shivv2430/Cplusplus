#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int A[n],k,x;
	for(int x= 0;x<n;x++){
	    cin>>A[x];
	}
	
	k=A[0];
	
	for (int x=1;x<n;x++){
	    if(A[x]>k)
	    k=A[x];
	}
	
	int C[k+1];
	
	for(int x= 0;x<=k;x++){
	    C[x]=0;
	}
	
	for(int x= 0;x<n;x++){
	    C[A[x]]=C[A[x]]+1;
	}
	
	for(int x=1;x<=k;x++){
	   C[x]=C[x]+C[x-1];
	}
	
	int B[n];
	
	for(x=n-1;x>=0;x--){
	    C[A[x]]=C[A[x]]-1;
	    B[C[A[x]]]=A[x];
	}
	
	
	for(int x=0;x<n;x++){
	    cout<<B[x]<<" ";
	}

}
