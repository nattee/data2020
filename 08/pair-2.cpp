#include <iostream>
#include <string>
#include <set>
using namespace std;
namespace CP {
  template <typename T1,typename T2>
  class pair{
    public:
      T1 first;
      T2 second;

      bool operator==(const pair<T1,T2> &other) {
        return (first == other.first && second == other.second);
      }

      bool operator<(const pair<T1,T2>& other) const {
        return ((first < other.first) ||
                (first == other.first && second < other.second));      
      }
  };
}

int main() {
  CP::pair<int,string> p1, p2;  //default ctor
  p1.first = 20; p1.second = "somchai";
  CP::pair<int,string> a(p1);   //copy ctor
  p2 = p1;
  cout << p2.first << "," << p2.second << endl;

  if (p1 == p2) { cout << "yes" << endl; }
  if (p1 < a) { cout << "yes" << endl;  }
  set<CP::pair<int,int>> s;
  s.insert( {1,2} );
  cout << s.begin()->second << endl;

}