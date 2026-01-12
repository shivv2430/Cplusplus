#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    if(n>=81 && n<100){
        cout<< "Very Good"<< n<< endl;
    }
    else if (n>=61 && n<80){
        cout<< "Good"<< n<< endl;
    }
    else if (n>=41 && n<60){
        cout<< "Average"<< n<< endl;
    }
    else{
        cout<< "Fail"<< n<< endl;
    }
}
