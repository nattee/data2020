#include <iostream>
#include <set>
using namespace std;

int main() {
  set<int> s = {4,1,3,2,1,1,3,4};

  cout << "Size of s is " << s.size() << endl;

  s.insert(10);
  s.insert(5);
  s.erase(3);

  cout << "member of s: ";
  for (auto it = s.begin(); it != s.end(); it++) cout << *it << " ";
}