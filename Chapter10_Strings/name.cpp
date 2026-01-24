#include <iostream>
using namespace std;
int main (){
    // declaration
    string s;
    // we decide string
    string S="It's Shivani";
    cout<<S<<endl;
    cout<<S.length()<<endl;

    // to take string from user
    string str;
    cout<<"Enter your String : ";
    // cin>>str;
    getline(cin,s);     //use to get full line of string
    cout<<str;
    cout<<str[0];





    // char arr[8]={'s','h','i','v','a','n','i'};
    // for (int i=0;i<8;i++){
    //     cout<<arr[i]<<endl;
    // }
}