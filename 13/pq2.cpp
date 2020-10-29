#include <iostream>
#include <vector>
#include <algorithm>

namespace CP {
  template <typename T>
  class priority_queue {
    protected:
      std::vector<T> v;
    public:
      bool empty() { return v.empty(); }
      size_t size() { return v.size(); }

      T& top()   { return v[v.size()-1]; }
      void pop() { v.erase(v.end()-1); }
      void push(const T& e) {
        v.insert(std::upper_bound(v.begin(),v.end(),e),e);
      }
  };
}

int main() {
  CP::priority_queue<int> pq;
  pq.push(3);
  pq.push(20);
  pq.push(4);
  CP::priority_queue<int> pq2(pq);

  while (pq2.empty() == false) {
    std::cout << pq2.top() << std::endl;
    pq2.pop();
  }

}
