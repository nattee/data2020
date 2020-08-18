#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<int>   v1 = {3,0,1,2,4,-3,9,8};
  vector<float> v2 = {10.2, -4, 0.13, 3.14, 2.73};

  auto it1 = min_element(v1.begin(),v1.end());
  auto it2 = max_element(v2.begin()+2,v2.end());

  cout << *it1 << endl;
  cout << *it2 << endl;
}