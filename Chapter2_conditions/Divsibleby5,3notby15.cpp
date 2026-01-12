#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    cout <<"Enter Number:"<<n<< endl;
    if(n%5==0 || n%3==0 && n%5!=0){
        cout<< "Divisible by 5 or 3 but not by 15"<< n<< endl;
    }
    else{
        cout<< "Not divisible by 5 and 3 but not by 15"<< n<< endl;
    }
}
