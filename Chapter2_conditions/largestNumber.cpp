#include <iostream>
using namespace std;
int main (){
    int a,b,c;
    cin>>a>>b>>c;
    cout <<"Enter one Number:"<<a<< endl;
    cout<<"Enter two Number:"<<b<< endl;
    cout<<"Enter three Number:"<<c<< endl;
    if(a>b && a>c){
        cout<< "The largest number is:"<< a<< endl;
    }
    else if (b>a && b>c){
        cout<< "The largest number is:"<< b<< endl;
    }
    else{
        cout<< "The largest number is:"<< c<< endl;
    }
}
//Homework
#include <iostream>
using namespace std;
int main (){
    int ram,shyam,ajay;
    cin>>ram>>shyam>>ajay;
    cout <<"Enter age of ram:"<<ram<< endl;
    cout<<"Enter age of shyam:"<<shyam<< endl;
    cout<<"Enter age of ajay:"<<ajay<< endl;
    if(ram<shyam && ram<ajay){
        cout<< "Youngest is:"<< ram<< endl;
    }
    else if (shyam<ram && shyam<ajay){
        cout<< "Youngest is:"<< shyam<< endl;
    }
    else{
        cout<< "Youngest is:"<< ajay<< endl;
    }
}
