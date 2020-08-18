#include <iostream>
#include <set>
using namespace std;

int main() {
  set< pair<string,int> > s = { {"somchai",5}, 
    {"abc",6}, {"abcd",-3}, {"somchai",-4}, 
    {"z",0}, {"z", -1}, {"z",9} };

  for (auto &x : s) {
    cout << x.first << "," << x.second << endl;
  }

  cout << "-- find -- " << endl;
  auto it =  s.find( {"z",-1});
  cout << (*it).first << "," << (*it).second << endl;
  it--;
  it--;
  cout << it->first << "," << it->second << endl;
  it++;
  cout << it->first << "," << it->second << endl;
}