//Problem Statement : https://www.codechef.com/problems/LAYERCAKE

#include <iostream>
using namespace std;

int main() {
	
	int T;
	cin>>T;
	cout<<endl;
	  
	while (T--){
	    
	 int N,M;
	 cin>>N>>M;
	 
	 int A[N];
	 for(int j=0;j<N;j++){
	     cin>>A[j];
	 }
	    
	  int B[M];
	  for(int k=0;k<M;k++){
	      cin>>B[k];
	  }
	  
	 int count=0;
	 for(int l=0;l<N;l++){
	     for(int o=0;o<M;o++){
	         if(A[l]>B[o])
	         {
	             count++;
	         }
	     }
	     
	 } 
	    
	cout<<count<<endl;    
	    
	}
}
