#include <iostream>
#include <vector>

using namespace std;

void pass_by_value(int x) {
  x = 99;
  cout << "inside PbV function x = " << x << endl;
}

//notice the different in the definition
void pass_by_reference(int &x) {
  x = 10000;
  cout << "inside PbR function x = " << x << endl;
}

int main() {
  cout << "Pass by Value, direct" << endl;
  pass_by_value(10);
  cout << endl;

  int x = 20;
  cout << "Pass by value, variable" << endl;
  pass_by_value(x);
  cout << "outside PbR function x = " << x << endl;
  cout << endl;

  cout << "Pass by reference" << endl;
  pass_by_reference(x);
  cout << "outside PbR function x = " << x << endl;


  //the following line cannot be compiled
  //because we need reference
  //pass_by_reference(20);
}

