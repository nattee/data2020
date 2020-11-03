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
        node *prev,*next;
        node() :
          data( T() ), prev( NULL ), next( NULL ) { }

        node(const T& data, node* prev,node* next) :
          data ( T(data) ), prev( prev ), next( next ) { }
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
      if (mSize == 0) {
        mFirst = new node(e,NULL,NULL);
        mFirst->next = mFirst;
        mFirst->prev = mFirst;
      } else {
        node* tmp = new node(e,mFirst,mFirst->prev);
        mFirst->prev->next = tmp;
        mFirst->prev = tmp;
        mFirst = tmp;
      }
    }

    void remove(const &T e) {
      node *p = mFirst;
      for (size_t i = 0;i < mSize;i++) {
        if (p->data == e) {
          p->next->prev = p->prev;
          p->prev->next = p->next;
        }
        if (p == mFirst) {
          mFirst = p->next;
        }
        delete p;
        mSize--;
        break;
      }
      if (mSize == 0) mFirst = NULL;
    }

    void print() {
      node *p;
      p = mFirst;
      for (size_t i = 0;i < mSize;i++) {}
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