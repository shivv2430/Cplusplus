//Problem Statement:-https://www.codechef.com/problems/STREAK

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  
    for (int t = 0; t < T; t++) {  
        int N;
        cin >> N;   

        int currentStreak = 0;   
        int longestStreak = 0; 

        for (int i = 0; i < N; i++) {
            int problems;
            cin >> problems;

            if (problems > 0) {
                currentStreak = currentStreak + 1;  
            } else {
                currentStreak = 0;  
            }

            if (currentStreak > longestStreak) {
                longestStreak = currentStreak; 
            }
        }

        cout << longestStreak << endl;
    }

    return 0;
}
