#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<" Enter a no. :";
    cin>>n;
    for(int i=1;i<=n;i++){{         //rows//
       for (int j=1;j<=n-i+1 ;j++){             //spacesloop//
            cout<< " ";
        }
        for (int j=1;j<=i;j++){             //starloop//
            cout<< "*";
        }
    }
     cout<<endl;
    }
}
