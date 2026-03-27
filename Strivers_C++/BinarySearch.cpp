#include<iostream>
using namespace std;

int main (){
    int n;
    cout<<"Enter Array size : ";
    cin>>n;

    int A[n];

    cout <<"Enter the elements (in sorted order): "<<endl;
    for(int i = 0; i < n; i++){
        cin>>A[i];
    }

    int key;
    cout<<"Enter element to search: ";
    cin>>key;

    int low = 0, high = n-1;
    int found = 0;

    // Binary Search
    while(low <= high){
        int mid = (low + high) / 2;

        if(A[mid] == key){
            cout<<"Element found at index: "<<mid;
            found = 1;
            break;
        }
        else if(A[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    if(found == 0){
        cout<<"Element not found"<<endl;
    }
}