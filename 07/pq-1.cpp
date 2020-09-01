#include <queue>
#include <iostream>

using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(10);
    pq.push(30);
    pq.push(20);
    cout << "Current size = " << pq.size() << " top is " << pq.top() << endl;
    pq.pop();
    pq.push(15);
    pq.pop();
    cout << "Current size = " << pq.size() << " top is " << pq.top() << endl;
}