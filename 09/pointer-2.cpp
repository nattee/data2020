#include <iostream>

using namespace std;

class test {
public:
  // constructor
  test() : data() { cout << "created" << endl; }
  //destructor
  ~test() { cout << data << " destroyed " << endl; }
  int data;
};

int main() {
  cout << "-- Life cycle --" << endl;
  //cout << "- normal object -" << endl;
  //test u;
  //u.data = 99;
  //for (int i = 0;i < 5;i++) {
  //    test t;
//    t.data = i*10;
//  }
//  return 0;
  cout << "- dynamically created -" << endl;
  test *a, *b;
  a = new test;
  a->data = 10;
  cout << a->data << endl;
  delete a;

  cout << "- dynamic array -" << endl;
  b = new test[4];
  b[0].data = 10;
  b[1].data = 20;
  b[2].data = 30;
  b[3].data = 40;
  delete [] b;
}