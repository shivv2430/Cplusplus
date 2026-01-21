#include <iostream>
using namespace std;
void hey(int n,int x){
    if(x>n) return;
    cout<< x<< endl;
    hey(n,x+1);
}
int main (){
    int n;
    cout<<"Enter a no. : ";
    cin>>n;
    hey(n,1);
}