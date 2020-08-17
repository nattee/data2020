#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<float> v) {
   for (size_t i = 0;i < v.size(); i++) {
      cout << v[i] << " ";
   }
   cout << endl;
}

int main() {
   vector<float> v1(10);
   print_vector(v1);

   vector<float> v2(5,3.55);
   print_vector(v2);

   vector<float> v3(v2);
   print_vector(v3);
}

