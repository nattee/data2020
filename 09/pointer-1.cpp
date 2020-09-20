#include <iostream>

using namespace std;

int main()
{
  int x, y, z;
  x = 1; y = 2; z = 3;
  int *a,*b;   
  
  a = &x;
  b = a+2;

  cout << "&x = " << &x << endl;
  cout << "&y = " << &y << endl;
  cout << "&z = " << &z << endl;
  cout << " a = " << a << endl;
  cout << " b = " << b << endl;
  cout << b-a << endl;
}