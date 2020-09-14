#include <iostream>
#include <string>
using namespace std;
namespace CP {
  template <typename T1,typename T2>
  class pair{
    public:
      T1 first;
      T2 second;
  };
}

int main() {
  CP::pair<int,string> p1, p2;  //default ctor
  p1.first = 20; p1.second = "somchai";
  CP::pair<int,string> a(p1);   //copy ctor
  p2 = p1;

  cout << p2.first << "," << p2.second << endl;

  /*
  if (p1 == p2) { //won't compile
    cout << "yes" << endl;
  }

  if (p1 < a) { //won't compile
    cout << "yes" << endl;
  }
  */
}