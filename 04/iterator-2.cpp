#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int>   v1 = {0, 10, 20 ,30, 40, 50, 60, 70, 80};
  vector<float> v2 = {0.2, -4, 0.13, 3.14, 2.73};

  cout << "----v1----" << endl;
  auto it = v1.begin();
  while (it < v1.end() ) {
    cout << it - v1.begin() << ": " << *it << endl;
    it++;
  }

  cout << "----v2----" << endl;
  for (auto it = v2.begin(); it < v2.end(); it++) {
    cout << it - v2.begin() << ": " << *it << endl;
  }
}