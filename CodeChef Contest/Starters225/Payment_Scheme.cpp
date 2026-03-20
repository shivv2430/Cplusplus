//Problem : https://www.codechef.com/problems/PAYSC
#include<iostream>
using namespace std;

int main() {
  int coins_week;
  cin >> coins_week;
  
  int scheme = 100 + (coins_week * 4);
  
  
      if(scheme <= 300){
      cout << 100 + (coins_week*4);
      }
  
  else 
  cout << "300";
}
