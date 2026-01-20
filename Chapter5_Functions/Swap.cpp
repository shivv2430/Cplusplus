                                                                // using temp
#include <iostream>
using namespace std;
void swap(int &x,int &y ){                                  //call by reference/address
    int t=x;
    x=y;
    y=t;
}
int main(){
    int x=2;
    int y=5;
    cout<< "Before swapping x= " <<x<< " y="<<y<< endl;

    swap(x,y);

    cout<< "After swapping "<< "x= " <<x<< " y="<<y<< endl;
}

                                                    
// #include <iostream>
// using namespace std;

// void swap(int x, int y) {                                   // call by value
//     int t = x;
//     x = y;
//     y = t;
// }

// int main() {
//     int x = 2;
//     int y = 5;

//     cout << "Before swapping x=" << x << " y=" << y << endl;

//     swap(x, y);

//     cout << "After swapping x=" << x << " y=" << y << endl;
// }
                                                                // without temp
// #include <iostream>
// using namespace std;

// void swap(int x, int y) {   // call by value 
//     x = x+y;
//     y = x-y;
//     x = x-y;
// }

// int main() {
//     int x = 2;
//     int y = 5;

//     cout << "Before swapping x=" << x << " y=" << y << endl;

//     swap(x, y);

//     cout << "After swapping x=" << x << " y=" << y << endl;

//     return 0;
// }
