#include <iostream>
#include <string>
using namespace std;

class Student {
public:
  Student(float score) {   gpax = score;  }
  void setFullname(string name,string surname) {
      this->name = name;
      this->surname = surname;
  }
  string getFullname() { return "[" + name + " " + surname + "]"; }
  bool is1stHornor() { return gpax >= 3.6; }
private:
  string name,surname;
  float gpax;
};

int main() {
    Student a(2.95);
    a.setFullname("nattee", "niparnan");
    cout << a.getFullname() << endl;
    if (a.is1stHornor()) { cout << "YES" << endl; } else { cout << "NO" << endl;}
    //Student b; // <-- cannot compile because there is no default constructor
}