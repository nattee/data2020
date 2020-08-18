#include <iostream>
#include <set>
using namespace std;

int main() {
  set<int> s = {1,2,3,4,1,2,4};

  cout << "Size of s is " << s.size() << endl;

  s.insert(10);
  s.insert(5);
  s.erase(3);

  cout << "member of s: ";
  for (auto x: s) cout << x << " ";
}