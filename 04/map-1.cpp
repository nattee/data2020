#include <iostream>
#include <map>
using namespace std;

int main() {
  //map between "Key Type" string and "Mapped Type" int
  map<string,int> m;

  m["somchai"] = 10;
  m["somying"] = -5;

  cout << "Size = " << m.size() << endl;

  //accessing unseen Key create a map with default value
  cout << "m[\"xxx\"] = " << m["xxx"] << endl;

  //each element is a pair of Key Type and Mapped Type
  for (auto it = m.begin(); it != m.end();it++) {
    cout << it->first << " is mapped to " << it->second << endl;
  }

  //this will create mapping "abc" to 0 first and then increase it
  m["abc"]++;

  cout << "now size = " << m.size() << endl;
  for (auto &x : m) {
    cout << x.first << " is mapped to " << x.second << endl;
  }
}