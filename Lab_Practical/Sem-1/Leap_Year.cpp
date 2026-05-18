//LeapYear--> 4 & not 100 OR 400
#include<iostream>
using namespace std;
int main (){
    int Year;
    cout<<"Enter Year : ";
    cin >> Year;

    if((Year%4==0 && Year%100 !=0 )|| Year%400 == 0 ){
        cout << "Leap Year : " << Year << endl;
    }
    else cout<<"Not a Leap Year "<< endl;
}