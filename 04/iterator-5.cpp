#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v1 = {10,20};

  auto it = v1.end()-1;  // this point to 20
  v1.resize(10);  // we resize (enlarge) v1, now [it] is invalidated

  //this might be OK but it actually point OUTSIDE element of v1
  cout << *it << endl;

  //this will crash the program
  v1.insert(it,99);
  for (auto &x: v1) {cout << x << " ";}

}