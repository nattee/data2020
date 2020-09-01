#include <iostream>
#include <string>

using namespace std;

class Student {
public:
  void setFullname(string name,string surname);
  string getFullname();
private:
  string name,surname;
};

void Student::setFullname(string name,string surname) {
  this->name = name;
  this->surname = surname;
}

string Student::getFullname() {
  return "[" + name + " " + surname + "]";
}

int main() {
    Student a;
    Student b;
    a.setFullname("nattee", "niparnan");
    cout << a.getFullname() << endl;
    cout << b.getFullname() << endl;

}