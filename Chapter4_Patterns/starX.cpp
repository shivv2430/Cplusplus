#include <iostream>
using namespace std;
int main() {
    int n;
    cout<< "Enter a no. n"<< endl;
    cin>>n;

    int m;
    cout<< "Enter a no. m"<< endl;
    cin>>m;

    for(int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++){
            if(i ==j ||i+j==m+1) cout<< "*";
            else cout<< " ";
        }
        cout<< endl;
    }
    }
    
