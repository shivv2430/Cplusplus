#include <iostream>
using namespace std;
int main(){
    int x=2;
    int y=8;
    cout<<x%y<<endl;     //a
    cout<<x%x<<endl;     //0
    cout<<x%(-y)<<endl;    //a%b
    cout<<(-x)%y<<endl;     //-(a%b)
}