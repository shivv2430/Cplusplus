#include <iostream>
using namespace std;
class student {
  int roll_no;

public:
  void get_data() { cin >> roll_no; }
  void display_data() { cout << roll_no; }
};

int main() {
  student a;
  a.get_data();
  a.display_data();
}
