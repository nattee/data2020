#include <iostream>
#include <set>
#include <vector>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {
  //add N random element
  int n = 1000000;
  int repeat = 10;

  cout << "-- append timing --" << endl;
  auto start = std::chrono::duration_cast< milliseconds >( system_clock::now().time_since_epoch() );
  for (int round = 0;round < repeat; round++) {
    vector<int> v;
    for (int i = 0;i < n;i++) {
      v.push_back(i);
    }
  }
  auto stop = std::chrono::duration_cast< milliseconds >( system_clock::now().time_since_epoch() );
  cout << "Vector insert of " << n << " elements use " << (stop.count() - start.count()) / 1.0 / repeat << " ms " << endl;

  start = std::chrono::duration_cast< milliseconds >( system_clock::now().time_since_epoch() );
  for (int round = 0;round < repeat; round++) {
    set<int> s;
    for (int i = 0;i < n;i++) {
      s.insert(i);
    }
  }
  stop = std::chrono::duration_cast< milliseconds >( system_clock::now().time_since_epoch() );
  cout << "Set    insert of " << n << " elements use " << (stop.count() - start.count()) / 1.0 / repeat << " ms " << endl;

}