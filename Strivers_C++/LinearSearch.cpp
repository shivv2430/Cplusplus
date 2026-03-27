#include<iostream>
using namespace std;

int main (){
    int n;
    cout<<"Enter Array size : ";
    cin>>n;

    int A[n];

    cout <<"Enter the elements of an array : "<<endl;
    for(int i = 0; i < n; i++){
        cin>>A[i];
    }

    int key;
    cout<<"Enter element to search: ";
    cin>>key;

    int found = 0;

    // Linear Search
    for(int i = 0; i < n; i++){
        if(A[i] == key){
            cout<<"Element found at index: "<<i;
            found = 1;
            break;
        }
    }

    if(found == 0){
        cout<<"Element not found"<<endl; 
}
}