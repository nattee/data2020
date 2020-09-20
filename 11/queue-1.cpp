#include <iostream>
#include <vector>

namespace CP {
  template <typename T>
  class queue
  {
    protected:
      std::vector<T> v;
    public:
      //------------- capacity function -------------------
      queue() : v() {}
      //------------- capacity function -------------------
      bool empty() const               { return v.empty();}
      size_t size() const               { return v.size();}
      //----------------- access --------------------------
      const T& front() const                { return v[0];}
      const T& back() const        { return v[v.size()-1];}
      //----------------- modifier ------------------------
      void push(const T& element)  { v.push_back(element);}
      void pop()                     { v.erase(v.begin());}

  };
}

int main() {
  CP::queue<int> q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.pop();
  std::cout << q.front() << std::endl;
}

