#include <iostream>
using namespace std;

int main() {
    string s1="Shivani";
    cout<<s1<<endl;
    int n=s1.length();
    reverse(s1.begin()+3,s1.end()+6);
    cout<<s1<<endl;
}
