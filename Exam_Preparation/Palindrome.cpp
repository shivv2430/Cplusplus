#include <iostream>
using namespace std;
int main (){
    int n,original,rev=0,rem;

    cout<<"Enter the value : ";
    cin>>n;

   n==original;

   while(n>0){
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
   }

   if (original==n)
   cout<<"Palindrome";

   else cout<< "Not a palindrome";
   return 0;
}