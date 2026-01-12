#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    //condition1 ? expression1 : expression2
    // if condition1 is true, expression1 is executed
    // if condition1 is false, expression2 is executed
    (n%2==0) ? cout<<"even" : cout<<"odd";
}