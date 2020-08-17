#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> v) {
   cout << "Size of V is " << v.size() << ":";
   for (int i = 0;i < v.size();i++) cout << v[i] << ", ";
   cout << endl;
}

int main() {
   vector<int> v(3,10);
   print(v);
   v.resize(6);
   print(v);
   v.resize(1);
   print(v);
   v.resize(7);
   print(v);
}

