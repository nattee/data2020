#include <iostream>
#include <vector>

using namespace std;

int main() {
   vector<float> v1(2);
   vector<float> v2(2);

   cout << "-- v1 --" << endl;
   for (int i = 0;i < 7; i++) {
      //v1[i] = i;
      cout << i << ": " << v1[i] << endl;
   }
   cout << "-- v2 --" << endl;
   for (int i = 0;i < 7; i++) {
      cout << i << ": " << v2[i] << endl;
   }
   cout << "using at" << endl;
   v2.at(1) = 99;
   //this will cause exception
   for (int i = 0;i < 7; i++) {
      cout << i << ": " << v2.at(i) << endl;
   }
}
