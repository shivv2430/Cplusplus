#include<iostream>
using namespace std;

    // function_type function-Name(parameter)
    // void PrintName(string name){
    //     cout<<"Hello"<<name;
    // }
    // int main (){
    //     string name;
    //     cin>>name;
    //     PrintName(name);

    // }

// int sum(int num1, int num2){
//     int num3=num1+num2;
//     cout<< num3;
// }
// int main(){
//     int num1,num2,num3;
//     cin>>num1>>num2;
//     sum(num1,num2);
//     return 0;

// }
// int maxx(int num1,int num2){
//     if(num1>=num2) return num1;
//     else return num2;
// }
// int main(){
//     int num1,num2;
//     cin>>num1>>num2;
//     int minimum = maxx(num1,num2);
//     cout<<minimum;
//     return 0;
// }


//Pass by Values
// void doSomething(int num){
//     cout<<num<<endl;
//     num=+5;
//     cout<<num<<endl;
//     num=+5;
//     cout<<num<<endl;
// }
// int main(){
//     int num = 10;
//     doSomething(num);
//     cout<<num<<endl;
//     return 0 ;
// }

//Pass by reference
void doSomething(string &s){
    s[0] = 't';
    cout<<s<<endl;
}
int main(){
    string s = "raj";
    doSomething(s);
    cout<<s<<endl;
}