#include <iostream>
#include <set>
#include <vector>
#include <chrono>
#include <cstdlib>
#include <algorithm>
#include <random>
using namespace std;
using namespace std::chrono;

int main() {
  //add N random element

  mt19937 generator(system_clock::now().time_since_epoch().count());  
  srand(time(NULL));
  int n = 1000000;
  vector<int> v;
  for (int i = 0;i < n;i++) {
    v.push_back(generator());
  }
  set<int> s(v.begin(), v.end());

  int repeat = 100000;

  cout << "-- search timing --" << endl;
  auto start = std::chrono::duration_cast< milliseconds >( system_clock::now().time_since_epoch() );
  int count = 0;
  for (int round = 0;round < repeat; round++) {
    int value = generator();
    if (find(v.begin(),v.end(),value) != v.end()) count++;
  }
  auto stop = std::chrono::duration_cast< milliseconds >( system_clock::now().time_since_epoch() );
  cout << "Vector find of " << n << " elements use " << (stop.count() - start.count()) << " ms " << endl;

  start = std::chrono::duration_cast< milliseconds >( system_clock::now().time_since_epoch() );
  for (int round = 0;round < repeat; round++) {
    int value = generator();
    if (s.find(value) != s.end()) count++;
  }
  stop = std::chrono::duration_cast< milliseconds >( system_clock::now().time_since_epoch() );
  cout << "Set    find of " << n << " elements use " << (stop.count() - start.count()) << " ms " << endl;
  cout << count << endl;

}