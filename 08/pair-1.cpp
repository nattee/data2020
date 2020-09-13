#include <iostream>
#include <string>
using namespace std;
namespace CP {
  template <typename T1,typename T2>
  class pair{
    public:
      T1 first;
      T2 second;
      pair(T1 a,T2 b) : first(a), second(b) {};
  };
}

int main() {
  CP::pair<int,string> p1(10,"a"),q1(20,"b");
  p1.first = 10;
  p1.second = "yes";
  p1 = q1;
  cout << q1.first << endl;
  CP::pair<int,string> p2(p1);
  cout << p2.first << endl;
  p2 = q1;
  cout << p2.first << endl;
  CP::pair<int,int> x(0,0);
  x.first = 1;
  x = {-1,-2};
  cout << x.first << endl;

  /*
  if (p1 == q1) { //won't compile
    cout << "yes" << endl;
  }

  if (p1 < q1) { //won't compile
    cout << "yes" << endl;
  }
  */
}