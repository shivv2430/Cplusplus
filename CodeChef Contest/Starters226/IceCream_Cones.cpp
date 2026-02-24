//Problem Statement :- https://www.codechef.com/problems/ICECONE6
#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T;
    while(T--){
        int N,M;
        cin >> N >> M;
        
        if( M <= 2 * N ) {
            cout << "Yes" << endl;
        }
        else{
            cout << "No"<< endl;
        }
    }

}