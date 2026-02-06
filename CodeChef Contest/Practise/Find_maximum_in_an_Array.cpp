// Problem Statement:-   https://www.codechef.com/practice/course/arrays/ARRAYS/problems/UWCOI20A?tab=statement
#include<iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    for (int i=0;i<T;i++){
        int N;
    cin >> N;
    
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    
    int tallest=arr[0];
    for (int i=0;i<N;i++){
        if (arr[i]>tallest){
            tallest=arr[i];
        }
    }
        cout<<tallest<<endl;
    }
}