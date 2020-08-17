#include <iostream>

//this tell C++ that when we say something
// that it does not understand, C++ should
// try to use std as its namespace

//this is VERY BAD PRACTICE in real world.
//10/10 not recommend
//.... but it's ok for this class
using namespace std;

int main() {
    cout << "Yes" << endl;
}