#include<iostream>
using namespace std;
int main (){
    int num , digit;
    cout << "Enter the number : ";
    cin >> num;

    int sum = 0;

    digit = num % 10;
    sum = sum + digit ;
    num = num / 10;

    cout << "sum " << sum;


}