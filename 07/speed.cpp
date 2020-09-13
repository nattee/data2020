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

int main() {
  mt19937 generator(system_clock::now().time_since_epoch().count());  
  uniform_int_distribution<int>  distr(1, 999999999);

  int n = 5000000;
  int repeat = 10;
  std::chrono::milliseconds start,stop;

  start = std::chrono::duration_cast< milliseconds >( system_clock::now().time_since_epoch() );
  for (int i = 0;i < repeat;i++) {
      vector<int> data;
      for (int i = 0;i < n;i++) data.push_back(distr(generator));
      while (!data.empty()) data.erase(data.end()-1);
  }
  stop = std::chrono::duration_cast< milliseconds >( system_clock::now().time_since_epoch() );
  cout << "append to vector " << setw(10) << (stop.count() - start.count()) / 1.0 / repeat << "ms" << endl;

  start = std::chrono::duration_cast< milliseconds >( system_clock::now().time_since_epoch() );
  for (int i = 0;i < repeat;i++) {
      queue<int> data;
      for (int i = 0;i < n;i++) data.push(distr(generator));
      while (!data.empty()) data.pop();
  }
  stop = std::chrono::duration_cast< milliseconds >( system_clock::now().time_since_epoch() );
  cout << "append to queue  " << setw(10) << (stop.count() - start.count()) / 1.0 / repeat << "ms" << endl;  
      
  start = std::chrono::duration_cast< milliseconds >( system_clock::now().time_since_epoch() );
  for (int i = 0;i < repeat;i++) {
      set<int> data;
      for (int i = 0;i < n;i++) data.insert(distr(generator));
      while (!data.empty()) data.erase(data.begin());
  }
  stop = std::chrono::duration_cast< milliseconds >( system_clock::now().time_since_epoch() );
  cout << "insert to set    " << setw(10) << (stop.count() - start.count()) / 1.0 / repeat << "ms" << endl;

  start = std::chrono::duration_cast< milliseconds >( system_clock::now().time_since_epoch() );
  for (int i = 0;i < repeat;i++) {
      priority_queue<int> data;
      for (int i = 0;i < n;i++) data.push(distr(generator));
      while (!data.empty()) data.pop();
  }
  stop = std::chrono::duration_cast< milliseconds >( system_clock::now().time_since_epoch() );
  cout << "push to pq       " << setw(10) << (stop.count() - start.count()) / 1.0 / repeat << "ms" << endl;

}