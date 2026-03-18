#include <iostream>
using namespace std;
int main(){
// int age;
// cin>>age;
// if(age>=18){
//     cout<<"You are Adult"<<endl;
// }
// else{
//     cout<<"You are not adult"<<endl;
// }

// int marks;
// cin>>marks;
// if(marks<=100 ){
//     cout<<"A"<<endl;
// }
// else if(marks<=79 ){
//     cout<<"B"<<endl;
// }
// else if(marks<=59 ){
//     cout<<"C"<<endl;
// }
// else if(marks<=49 ){
//     cout<<"D"<<endl;
// } 
// else if(marks<=44 ){
//     cout<<"E"<<endl;
// }
// else if(marks<25 ){
//     cout<<"F"<<endl;
// }

int age;
cin >> age;
if(age<18){
    cout<<"Not eligible for job"<<endl;
}
else if(age<=54){
    cout<<"eligible for job"<<endl;
}
else if(age<=57){
    cout<<"eligible for job";
    if(age>=55){
        cout<<",but retirement soon"<<endl;
    }
}
else if(age>57){
    cout<<"retirement time"<<endl;
}

}
