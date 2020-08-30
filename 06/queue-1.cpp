#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    while (q.empty() == false) {
        cout << q.front() << endl;
        q.pop();
    }
    cout << "-- example 2 --" << endl;
    queue<vector<int>> q2;
    vector<int> v1 = {1,2,3};
    vector<int> v2 = {99,88,-1};
    q2.push( v1 );
    q2.push( v2 );
    cout << q2.back()[1] << endl;
    cout << q2.front().size() << endl;
    auto x = q2.front();
    q2.pop();
    cout << x[0] << endl;
}
