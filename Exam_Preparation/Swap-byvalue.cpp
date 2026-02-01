#include <iostream>
using namespace std;

void swap(int a, int b)   // Call by Value
{
    int temp = a;
    a = b;
    b = temp;

    cout << "After swapping inside function: " << a << " " << b << endl;
}

int main()
{
    int x, y;

    cout << "Enter two digits: ";
    cin >> x >> y;

    swap(x, y);

    cout << "After function call in main: " << x << " " << y << endl;

    return 0;
}
