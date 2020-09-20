
#include <stdexcept>
#include <iostream>

using namespace std;

namespace CP { 
template <typename T>
class vector
{
  protected:
    T *mData;
    size_t mCap;
    size_t mSize;

    void rangeCheck(int n) {
      if (n < 0 || (size_t)n >= mSize) {
        throw std::out_of_range("index of out range") ;
      }
    }

    void expand(size_t capacity) {
      T *arr = new T[capacity]();
      for (size_t i = 0;i < mSize;i++) {
        arr[i] = mData[i];
      }
      delete [] mData;
      mData = arr;
      mCap = capacity;
    }

    void ensureCapacity(size_t capacity) {
      if (capacity > mCap) {
        size_t s = (capacity > 2 * mCap) ? capacity : 2 * mCap;
        expand(s);
      }
    }

  public:
    //-------------- constructor & copy operator ----------

    // default constructor
    vector() {
      int cap = 1;
      mData = new T[cap]();
      mCap = cap;
      mSize = 0;
    }

    // constructor with initial size
    vector(size_t cap) {
      mData = new T[cap]();
      mCap = cap;
      mSize = cap;
    }

    ~vector() {
      delete [] mData;
    }

    //----------------- access -----------------
    T& at(int index) {
      rangeCheck(index);
      return mData[index];
    }

    T& operator[](int index) {
      return mData[index];
    }

    //----------------- modifier -------------
    void push_back(const T& element) {
      ensureCapacity(mSize+1);
      mData[mSize++] = element;
    }

    void pop_back() {
      mSize--;
    }

};

}

int main() {
  CP::vector<int> v;

  CP::vector<int> w(5);

  for (int i = 0;i < 5;i++) w[i] = i*10;
  CP::vector<int> x(w);
  CP::vector<int> y = w;
  x[3] = -1;
  cout << y[3] << endl;
  cout << w[3] << endl;
}