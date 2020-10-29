#include <stdexcept>
#include <iostream>
#include <vector>

namespace CP { 
  template <typename T>
  class stack
  {
    protected:
      std::vector<T> v;
    public:
      // default constructor
      stack() : v() { }
      //------------- capacity function -------------------
      bool empty() const           {    return v.empty(); }
      size_t size() const          {     return v.size(); }
      //----------------- access --------------------------
      const T& top() const        { return v[v.size()-1]; }
      //----------------- modifier ------------------------
      void push(const T& element) { v.push_back(element); }
      void pop()                          { v.pop_back(); }
  };
}

int main() {
  CP::stack<int> s;
  s.push(1);
  s.push(2);
  s.push(3);
  while (!s.empty()) {
    std::cout << s.top() << std::endl;
    s.pop();
  }

}