//access the value of the variable whose whole address is in the pointer using de Reference or operator
#include <iostream>
using namespace std;
int main (){
    int x =12;
        
         //p Dabbe ke andar x ka address store kia hai 
    int* ptr=&x;            // * ->De Reference Operator 

    cout<<&x<<endl;
    cout<< ptr<<endl;
    cout<< *ptr<<endl;            //p Dabbe ke andar x ka address store kia hai 

        // update x value
    *ptr=23;
    // x=13;
    cout<<x<< endl;
}