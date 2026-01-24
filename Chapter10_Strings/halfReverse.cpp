#include <iostream>
using namespace std;

int main() {
    string s1="Shivani";
    cout<<s1<<endl;
    int n=s1.length();
    reverse(s1.begin(),s1.begin()+4);
    cout<<s1<<endl;
}
