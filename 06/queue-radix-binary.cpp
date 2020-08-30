#include <iostream>
#include <vector>
#include <queue>
#include <chrono>
#include <random>
using namespace std;
using namespace std::chrono;

using namespace std;
int base;

#define MAX_RANGE 999999999

int getDigit64(int v,int k) {
    v >>= (k * 6);
    return v & 63;
}

int getDigit32(int v,int k) {
    v >>= (k * 5);
    return v & 31;
}

int getDigit16(int v, int k) {  
    v >>= (k << 2);
    return v & 0xf;
}

int getDigit8(int v, int k) {  
    v >>= (k * 3);
    return v & 0x7;
}

int getDigit4(int v, int k) {  
    v >>= (k << 1);
    return v & 0x3;
}

int getDigit(int v, int k) {  
    //if (base == 64) return getDigit64(v,k);
    //if (base == 32) return getDigit32(v,k);
    //if (base == 16) return getDigit16(v,k);
    //if (base == 8) return getDigit8(v,k);
    if (base == 4) return getDigit4(v,k);
    // return the kth digit of v (MSD is digit 0)
    int i;
    for (i=0; i<k; i++) v /= base;
    return v % base;
}

// d = number of digits
void radixSort(vector<int> &data,int d) {  
    queue<int> q[base];
    for (int k=0; k<d; k++) {
        for (auto &x : data) {
            //auto b = getDigit(x,k);
            q[getDigit(x,k)].push(x);
        }
        for (int i=0,j=0; i<base; i++)
            while(!q[i].empty()) {
                data[j++] = q[i].front(); q[i].pop();
            }
    }
}

int main() {
    mt19937 generator(system_clock::now().time_since_epoch().count());  
    uniform_int_distribution<int>  distr(1, MAX_RANGE);
  
    int n = 500000;
    int repeat = 10;
    auto start = std::chrono::duration_cast< milliseconds >( system_clock::now().time_since_epoch() );
    auto stop = start;

    cout << "This gonna take some minutes..." << endl;
    for (base = 2;base <= 64;base++) {
        start = std::chrono::duration_cast< milliseconds >( system_clock::now().time_since_epoch() );

        for (int i = 0;i < repeat;i++) {
            vector<int> data(n);
            for (int i = 0;i < n;i++) data[i] = distr(generator);
            int digit = log(MAX_RANGE)/log(base)+1;
            radixSort(data,digit);

        }
        stop = std::chrono::duration_cast< milliseconds >( system_clock::now().time_since_epoch() );
        cout << "Base " << base << " Time used = " << (stop.count() - start.count()) / 1.0 / repeat << " ms " << endl;
    }        

}


