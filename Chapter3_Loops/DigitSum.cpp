#include <iostream>
using namespace std;
int main() {
 int n ,ld;
 cout<< "Enter a no. : ";
 cin>>n;
 int sum=0;
while(n!=0){
    int ld=n%10;
    n/=10;
    sum+=ld;
    }
    cout<< sum;
}