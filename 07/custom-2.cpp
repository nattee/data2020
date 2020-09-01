#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
  auto compare = [](const string& lhs, const string& rhs) {
    return lhs.size() < rhs.size();
  };

  cout << "Result of compare function = " << compare("xxx","z") << endl;

  priority_queue<string,vector<string>,decltype(compare)> pq(compare);
  pq.push("somchai");
  pq.push("z");
  pq.push("abc");
  while (pq.empty() == false) {
    cout << pq.top() << endl;
    pq.pop();
  }

}