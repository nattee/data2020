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
  CP::node *p;
  p = new node(10,NULL);
  q = new node(20,NULL);
  p->next = q;
  q->next = new node(30,NULL);
}