#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
   vector<int> v = {9,-1,3,7,5,2,1,4};

   int x = 5;
   if ( find(v.begin(), v.end(), x) != v.end() ) {
      cout << "found" << endl;
   } else {
      cout << "not found" << endl;
   }

   if ( find(v.begin(), v.begin()+3, 3) != v.begin() + 2) cout << "FOUND" << endl;

   //how many "YES" will be printed? (CHEAT QUESTION)
   //if (find(v.begin()  , v.begin()+2, x) != v.end()) cout << "YES" << endl;
   //if (find(v.begin()  , v.begin()+4, x) != v.end()) cout << "YES" << endl;
   //if (find(v.begin()+4, v.begin()+2, x) != v.end()) cout << "YES" << endl;
   //if (find(v.begin()+4, v.begin()+8, x) != v.end()) cout << "YES" << endl;
}

