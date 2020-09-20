#include <iostream>
#include <vector>

namespace CP {
  template <typename T>
  class queue
  {
    protected:
      std::vector<T> v;
      int mFront;
    public:
      //------------- capacity function -------------------
      queue() : v(), mFront() {}
      //------------- capacity function -------------------
      bool empty() const               { return v.empty();}
      size_t size() const        { return v.size()-mFront;}
      //----------------- access --------------------------
      const T& front() const           { return v[mFront];}
      const T& back() const        { return v[v.size()-1];}
      //----------------- modifier ------------------------
      void push(const T& element)  { v.push_back(element);}
      void pop()                               { mFront++;}
  };
}

int main() {
  CP::queue<int> q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.pop();
  std::cout << q.front() << std::endl;

  for (int i = 0;i < 1000000;i++) {
    q.push(i);
    q.pop();
  }
  std::cout << q.size() << std::endl;
}

