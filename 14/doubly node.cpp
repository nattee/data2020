#include <iostream>

using namespace std;

namespace CP { 

template <typename T>
class node {
  friend class list;
  public:
    T data;
    node *prev,*next;
    node() :
      data( T() ), prev( NULL ), next( NULL ) { }

    node(const T& data, node* prev,node* next) :
      data ( T(data) ), prev( prev ), next( next ) { }
};
}

int main() {
  // assume that s points to the second node
  CP::node<int> *tmp = new CP::node<int>(99,NULL,NULL);
  tmp->next = s;
  tmp->prev = s.prev;
  s->prev->next = tmp;
  s->prev = tmp;

  // assume that f points to the first node
  CP::node<int> *tmp = new CP::node<int>(99,NULL,NULL);
  tmp->next = f;
  tmp->prev = NULL;
  mFirst = tmp;
  f->prev = tmp;
}


