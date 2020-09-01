#include <iostream>
#include <string>
#include <queue>
using namespace std;

class Student {
public:
  Student(float score, string a, string b) {
    name = a;
    surname = b;
    gpax = score;  
  }
  bool is1stHornor() { return gpax >= 3.6; }

  //not good, now our data is public
  string name,surname;
  float gpax;

  //overloading <
  bool operator<(const Student& other) const {
    return gpax < other.gpax;
  }

};

class StudentByNameComparator {
public:
  bool operator()(const Student& lhs, const Student& rhs) {
      return lhs.name < rhs.name;
  }
};

class GpaxThenName {
public:
  bool operator()(const Student& lhs, const Student& rhs) {
      if (lhs.gpax == rhs.gpax) return lhs.name < rhs.name;
      return lhs.gpax < rhs.gpax;
  }
};

int main() {
  Student a(2.95,"nattee","niparnan");
  Student b(4.00,"attawith","sudsang");
  Student c(4.00,"vishnu","kotrajaras");
  cout << (a < b) << endl;
  StudentByNameComparator comp1;
  GpaxThenName comp2;


  cout << comp1(a,b) << endl;


  priority_queue<Student,vector<Student>,StudentByNameComparator> pq(comp1);
  pq.push(a);
  pq.push(b);
  cout << pq.top().name << endl;

  priority_queue<Student,vector<Student>,GpaxThenName> pq2(comp2);
  pq2.push(a);
  pq2.push(b);
  pq2.push(c);
  cout << pq2.top().name << endl;

}