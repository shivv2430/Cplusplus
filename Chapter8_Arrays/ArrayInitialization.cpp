#include <iostream>
using namespace std;
int main (){
    int arr[5]={4,6,0,1,8};
    arr[0]=0;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }

    for(int i=5;i>0;i--){
        cout<<arr[i]<<endl;
    }


}