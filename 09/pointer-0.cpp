#include <iostream>

using namespace std;

int main()
{
  int x, y; //this is normal variable x and y
  int *a;   //this is int pointer variable y
  int *b;   //another int pointer

  x = 10;
  a = &x;
  b = a;
  *b = 30;
  y = *b;

  cout << &x << endl;
  cout << &y << endl;
  cout << &a << endl;
  cout << &b << endl;
  cout << sizeof(int) << endl;
  cout << sizeof(int *) << endl;
}