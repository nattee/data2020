#include <iostream>

using namespace std;

int main() {
  int a[2] = {10,20};

  // a is array
  // int a[0]
  // int a[1]
  // a[0] = 10
  // a[1] = 20

  for (int i = 0;i < std::size(a) ;i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}



