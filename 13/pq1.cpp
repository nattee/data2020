#include <iostream>
#include <vector>
#include <algorithm>

namespace CP {
  template <typename T>
  class priority_queue
  {
    protected:
      std::vector<T> v;
    public:
      bool empty() { return v.empty(); }
      bool size() { return v.size(); }
      void push(const T &e) { v.push_back(e);}
      T top() { return *std::max_element(v.begin(),v.end()); }
      void pop() { v.erase(std::max_element(v.begin(),v.end()));}

  };
}


int main() {
  CP::priority_queue<int> pq;
  pq.push(3);
  pq.push(20);
  pq.push(4);
  while (pq.empty() == false) {
    std::cout << pq.top() << std::endl;
    pq.pop();
  }
}
