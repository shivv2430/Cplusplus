//Problem : https://www.codechef.com/problems/BOP2 
#include <set>
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        set<int> colors;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            colors.insert(x);
        }

        cout << colors.size() << endl;
    }
}