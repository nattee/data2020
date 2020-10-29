#include <iostream>

using namespace std;

namespace CP { 

template <typename T>
class list
{
  protected:
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

  protected:
    node *mFirst; // pointer to a header node
    size_t mSize;


  public:
    //-------------- constructor & copy operator ----------
    // default constructor
    list() :
      mFirst( NULL ), mSize( 0 ) { }

    ~list() {
      clear();
    }

    //------------- capacity function -------------------
    bool empty() const { 
      return mSize == 0;
    }

    size_t size() const {
      return mSize;
    }

    void clear() {
      while (mFirst != NULL) {
        node* tmp = mFirst->next;
        delete mFirst;
        mFirst = tmp;
      }
    }
    
    void push_front(const T& e) {
      mFirst = new node(e,mFirst);
    }

    void print() {
      node *p;
      p = mFirst;
      while (p != NULL) {
        cout << p->data << endl;
        p = p->next;
      }
    }
};
}

int main() {
  CP::list<int> l;
  l.push_front(1);
  l.push_front(2);
  l.push_front(3);
  l.push_front(4);
  l.print();
}