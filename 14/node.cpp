#include <iostream>

using namespace std;

namespace CP { 

template <typename T>
class node {
  friend class list;
  public:
    T data;
    node *next;
    node() :
      data( T() ), next( NULL ) { }

    node(const T& data, node* next) :
      data ( T(data) ), next( next ) { }
};
}

int main() {
  CP::node<int> *p;
  p = new CP::node<int>(10,NULL);
  CP::node<int> *q;
  q = new CP::node<int>(20,NULL);
  p->next = q;
  q->next = new CP::node<int>(30,NULL);
}
