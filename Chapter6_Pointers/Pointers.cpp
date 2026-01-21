//access the value of the variable whose whole address is in the pointer using de Reference or operator
#include <iostream>
using namespace std;
int main (){
    int x =3;
        
         //p Dabbe ke andar x ka address store kia hai 
    int* p=&x;            // * ->De Reference Operator 

    cout<<&x<<endl;
    cout<< p<<endl;
    cout<< *p<<endl;            //p Dabbe ke andar x ka address store kia hai 
}