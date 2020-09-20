#include <iostream>
using namespace std;

void leaked() {
  int *a;
  a = new int[2000];
  
}
int main() {
  for (int i = 0;i < 1000000;i++) {
    int *a;
    cout << i << endl;
    leaked();
  }
}
