#include <iostream>
#include <cmath>
#include <stdint.h>
using namespace std;

int main() {
    int t,k;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> k;
        for (int j = k; j < 20000; ++j) {
            if ((uint64_t)(pow(j,3)) % 1000 == 888){
                cout << j << endl;
                break;
            }
        }
    }

    return 0;
}
