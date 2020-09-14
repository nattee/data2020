#ifndef __CP_PAIR_INCLUDED__
#define __CP_PAIR_INCLUDED__
namespace CP {
  template <typename T1,typename T2>
  class pair{
    public:
      T1 first;
      T2 second;
      
      // --------- constructor ------------ 
      pair() : first(), second() { }
      pair(const T1 &a, const T2 &b) : first(a), second (b) { }

      // --------- operator -------------
      bool operator==(const pair<T1,T2> &other) { 
        return (first == other.first && second == other.second);
      }
      bool operator<(const pair<T1,T2>& other) const {
        return ((first < other.first) ||
                (first == other.first && second < other.second));      
      }
  };
}
#endif