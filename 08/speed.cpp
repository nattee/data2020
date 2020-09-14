#include <iomanip>
#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <chrono>
#include <random>
#include <windows.h>
using namespace std;
using namespace std::chrono;

int pbv(vector<int> v) {
    return v.size();
}

int pbr(vector<int> &v) {
    return v.size();
}

int main() {
  mt19937 generator(system_clock::now().time_since_epoch().count());  
  uniform_int_distribution<int>  distr(1, 999999999);

  int n = 50000000;
  int repeat = 100;
  vector<int> v(n);
  std::chrono::milliseconds start,stop;

  start = std::chrono::duration_cast< milliseconds >( system_clock::now().time_since_epoch() );
  for (int i = 0;i < repeat;i++) {
    pbv(v);
  }
  stop = std::chrono::duration_cast< milliseconds >( system_clock::now().time_since_epoch() );
  cout << "calling with pass-by-value:     " << setw(10) << (stop.count() - start.count()) / 1.0 / repeat << "ms" << endl;

  start = std::chrono::duration_cast< milliseconds >( system_clock::now().time_since_epoch() );
  for (int i = 0;i < repeat;i++) {
    pbr(v);
  }
  stop = std::chrono::duration_cast< milliseconds >( system_clock::now().time_since_epoch() );
  cout << "calling with pass-by-reference: " << setw(10) << (stop.count() - start.count()) / 1.0 / repeat << "ms" << endl;  
      

}