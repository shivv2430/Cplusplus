#include <iostream>
using namespace std;
void sum(int a ,int b){ //formal
    cout << a+b<<endl;
}
                                                    //pass by value
int main(){
    sum(3,4); //actual parameters
    return 0;
}