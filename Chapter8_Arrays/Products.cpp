#include <iostream>
using namespace std;
int main (){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int Products  = 1 ;
    for(int i=1;i<6;i++){
        Products*=arr[i];
    }
    cout<<Products<<endl;
}
