#include <iostream>
using namespace std;
int main ()
{
int n ;
cout<< " enter a no. : "<< endl;
cin>>n;
int r ;
cout<< " enter a no. : "<< endl;
cin>>r;


int a=1;
for (int i=1;i<=n;i++){
    a*=i;
}

int b=1;
for (int i=1;i <= r ;i++){
cout<< b *= i;
}
int c=1;
for (int i=1;i<=n-r;i++){
    c*=i;
}
}