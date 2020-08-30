#include <iostream>
#include <map>
using namespace std;

int main() {
  //map between "Key Type" string and "Mapped Type" int
  map<int,string> m;

  m[1] = "somchai";
  m[99] = "nattee";

  int k = 99;
  map<int,string>::iterator it;
  if ((it = m.find(k)) != m.end()) {
    cout << "Key " << it->first << " is mapped to " << it->second << endl;
  } else {
    cout << "Key " << k << " is not exists in m." << endl;
  }

  //this is not the correct way to check if key exists
  //  why??
  if (m[k] != "") {
    cout << "exists" << endl;
  } else {
    cout << "does not exists" << endl;
  }
}