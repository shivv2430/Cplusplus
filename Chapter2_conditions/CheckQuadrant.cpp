#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    if(n> 0 && n<90){
        cout<< "lies in 1st quadrant"<< n<< endl;
    }
    else if (n>=90 && n<180){
        cout<< "lies in 2nd quadrant"<< n<< endl;
    }
    else if (n>=180 && n<270){
        cout<< "lies in 3rd quadrant"<< n<< endl;
    }
    else{
        cout<< "lies in 4th quadrant"<< n<< endl;
    }
}
