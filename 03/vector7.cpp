#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<int> v) {
   cout << "Size of V is " << v.size() << ": ";
   for (int i = 0;i < v.size();i++) cout << v[i] << ", ";
   cout << endl;
}

int main() {
   vector<int> v = {9,-1,3,7,5,2,1,4};

   print(v);
   sort(v.begin()+2, v.begin()+6);
   print(v);
 }

