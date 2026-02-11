#include<iostream>
using namespace std;
int main (){
    int N;
    cout<<"Enter the number N :";
    cin>>N;


    int A[N];
    cout<<"Enter the Array : "<<endl;
    for(int i=0;i<N;i++){
        cin>>A[i];
    }

    int maximum=A[0];

    for (int i=0;i<N;i++){
        if (A[i]>maximum){
            maximum=A[i];
        }
    }
        cout<<maximum<<endl;
    
}