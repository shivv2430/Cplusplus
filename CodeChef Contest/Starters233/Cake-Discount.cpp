// Problem : https://www.codechef.com/problems/DISCOUNT7

#include <iostream>
using namespace std;

int main() {
  int no_of_cakes;
  cin >> no_of_cakes;
  // for discount if no. of cake is >=5 then 15% discount
  if (no_of_cakes >= 5) {
    cout << no_of_cakes * 85 << endl;
  }
  // else no discount
  else {
    cout << no_of_cakes * 100 << endl;
  }

  return 0;
}