#include <iostream>
using namespace std;
void print(int n){
     if(n==0) return;               // function base
    print(n-1);                      //function call
    cout<<n<<endl;                  //function work
    }
int main (){
    int n;
    cout<<" Enter a no. : ";
    cin>>n;
    print(n);
}
