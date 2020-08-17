#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> v) {
   cout << "Size of V is " << v.size() << ": ";
   for (int i = 0;i < v.size();i++) cout << v[i] << ", ";
   cout << endl;
}

int main() {
   vector<int> v(3,8);
   v.insert( v.begin(), 1);
   v.insert( v.begin()+3, 2);
   
   v.insert( v.end(), 3);
   print(v);
   v.erase(v.begin());
   v.erase(v.begin()+2);
   //print(v);
   //v.pop_back();
   //print(v);
}

