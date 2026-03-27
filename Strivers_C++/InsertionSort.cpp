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

    // Insertion Sort
    for(int i = 1; i < n; i++){
        int key = A[i];
        int j = i - 1;

        while(j >= 0 && A[j] > key){
            A[j+1] = A[j];
            j--;
        }

        A[j+1] = key;
    }

    // Print sorted array
    cout<<"Sorted array: ";
    for(int i = 0; i < n; i++){
        cout<<A[i]<<" ";
    }
}