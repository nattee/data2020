#include <iostream>
#include <vector>

using namespace std;

int find_max(vector<int> v) {
  int m = v[0];
  for (size_t i = 0;i < v.size();i++)
    if (v[i] > m)
      m = v[i];
  return m;
}

int count_pair_sum(vector<int> v,int k) {
  int count = 0;
  for (size_t i = 0;i < v.size();i++)
    for (size_t j = 0;j < v.size();j++) 
      if (i != j && v[i]  + v[j] == k)
        count++;
  return count/2;
}

int main() {

}