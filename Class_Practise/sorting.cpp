#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
int A[n],x,y,min,loc,temp;

for(x=0;x<n;x++)
{
    cin>>A[x];
}
for(x=0;x<=n-2;x++)
{
    min = A[x];
    loc = x;
for(y=x+1;y<=n-1;y++){
    if(A[y]<min){
        min = A[y];
        loc = y;
    }
}

temp = A[x];
A[x]=A[loc];
A[loc]= temp;
for(x=0;x<n;x++){
    cout<<A[x]<<" ";
}
}
}