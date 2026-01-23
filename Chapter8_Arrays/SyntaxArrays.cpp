#include <iostream>
using namespace std;
int main (){
    int Arr[5];   //Declarations
    //  Arr[0]=6;    //initialization of array element
    //  Arr[1]=2;
    //  Arr[2]=8;
    //  Arr[3]=5;
    //  Arr[4]=0;
    cout<< "Enter the element of array : "<<endl;
for(int i=0;i<5;i++){
    cin>>Arr[i];
}

for(int i=0;i<5;i++){
    cout<<Arr[i]<<" "<<endl;
}

for(int i=0;i<5;i++){
    cout<<Arr[i]<<" "<<endl;
}
Arr[0]=100;

for(int i=0;i<5;i++){
    cout<<Arr[i]<<" "<<endl;
}


// cout<<Arr[0]<<endl;
// cout<<Arr[1]<<endl;
// cout<<Arr[2]<<endl;
// cout<<Arr[3]<<endl;
// cout<<Arr[4]<<endl;

}