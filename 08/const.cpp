#include <iostream>
using namespace std;

void test(int &x, const int& y) {
  x++;               // Okay; doable
  cout << y << endl; // Okay, we only read y
  for (int i = 0;i < y;i++)  { // Okay, too
    cout << i << endl;
  }
  y--; // ERROR: we promise NOT to change Y
}

class ccc {
public:
  int a,b;
  // This member promises NOT to change anything
  void inspect() const {
    if (a < b) cout << "yes" << endl; // Okay

    // b += 20;   <--- NOT OKAY
  }   
  // This member function might change something
  void mutate() {
    if (a < b) a += 10; // Okay
  }
};

void test2(ccc& changeable, const ccc& unchangeable)
{
  changeable.inspect();   // Okay: doesn't change a changeable object
  changeable.mutate();    // Okay: changes a changeable object
  unchangeable.inspect(); // Okay: doesn't change an unchangeable object
  unchangeable.mutate();  // ERROR: attempt to change unchangeable object
}

int main() {

}