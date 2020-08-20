
#include <iostream>
#include <vector>
using namespace std;
void remove_even(vector<int> &v,int a,int b) {
  int z = v.size() - 1;
  if (b < z) z = b;
  int i = a;
  auto p = v.begin() + a;
  //for (int j = 0; j < a; j++) {
  //  p++;
  //}
  while (i <= z) {
    if (i % 2 == 0) {
        v.erase(p);
    }
    i++;
    p++;
  }
}

// PPxxxx-x------xx---x
int main() {
 //read input
 int n,a,b;
 cin >> n;
 vector<int> v;
 for (int i = 0;i < n;i++) {
 int c;
 cin >> c;
 v.push_back(c);
 }
 cin >> a >> b;
 //call function
 remove_even(v,a,b);
 //display content of the vector
 for (auto &x : v) {
 cout << x << " ";
 }
 cout << endl;
}

