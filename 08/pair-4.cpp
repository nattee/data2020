#include <iostream>
#include <string>
#include <set>
#include <queue>
#include <vector>
using namespace std;
namespace CP {
  template <typename T1,typename T2>
  class pair{
    public:
      T1 first;
      T2 second;
      
      // --------- constructor ------------ 
      pair() : first(), second() { }
      pair(const T1 &a, const T2 &b) : first(a), second (b) { }

      // --------- operator -------------
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
  CP::pair<int, bool> p(10,false);
  CP::pair<string, int> q("abc",42), r("",0);

  cout << (q < r) << endl;
  priority_queue<CP::pair<string,int>> pq;
  pq.push(r);
  pq.push(q);
  cout << pq.top().first << endl;

  CP::pair<string, int> x(q);
  CP::pair<string, int> y = x;

  //-- all below Okay now  --
  CP::pair<int, int> w;
  cout << w.first << ":" << w.second << endl;
  vector<CP::pair<int,int>> v(10);
  for (auto &x: v) { cout << x.first << endl;}
}