#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
  less<int> x;
  greater<int> y;

  int a = 10;
  int b = 3;
  cout << x(a,b) << endl;
  cout << y(a,b) << endl;
}
