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

int main() {
  Student a(2.95,"nattee","niparnan");
  Student b(4.00,"attawith","sudsang");
  cout << (a < b) << endl;
  priority_queue<Student> pq;
  pq.push(a);
  pq.push(b);
  cout << pq.top().name << endl;

}