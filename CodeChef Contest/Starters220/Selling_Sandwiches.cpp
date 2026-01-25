// Problem : https://www.codechef.com/problems/SANDWSHOP

#include <iostream>
using namespace std;

int main() {
    int A , B , C;
    cout<<"Enter the Sandwich selling Price : ";
    cin >> A >> B >> C;
     
    cout<<"Enter the Sandwich selling Price : "<<A;
    cout<<"Enter the Bun Price : "<<B;
    cout<<"Enter the Vegies used Price : "<<C;
    cout <<"Prices that chef contain : "<< A-(B+C);
}
