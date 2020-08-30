#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;
    s.push(10);
    s.push(5);
    s.push(8);

    cout << "top = " << s.top();
    cout << " size = " << s.size() << endl;

    s.pop();
    cout << "top = " << s.top();
    cout << " size = " << s.size() << endl;

    s.pop();
    cout << "top = " << s.top();
    cout << " size = " << s.size() << endl;
}