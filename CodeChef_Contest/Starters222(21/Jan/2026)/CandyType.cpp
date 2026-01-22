//Problem Statement : https://www.codechef.com/problems/CANDYTYPE

#include <iostream>
using namespace std;

int main() {
	// your code goes here
int T;
cin>>T;
cout<<endl;
for(int i=0;i<T;i++){
    
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxCount = 0;
    int mode = a[0];

    for(int i = 0; i < n; i++) {
        int count = 0;

        for(int j = 0; j < n; j++) {
            if(a[j] == a[i]) {
                count++;
            }
        }

        // Update mode
        if(count > maxCount) {
            maxCount = count;
            mode = a[i];
        }
        // Tie case → choose smaller number
        else if(count == maxCount && a[i] < mode) {
            mode = a[i];
        }
    }
    cout << mode<<endl;
}
    
}

