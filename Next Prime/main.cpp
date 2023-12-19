#include <iostream>
#include "cmath"
using namespace std;
int main() {
    uint64_t n;
    cin >> n;
    if (n <= 2){
        cout << 2;
    }
    else{
        bool prime;
        for (uint64_t i = n; i < 2000000012;  ++i) {
            prime = true;
            for (int factor = 2; factor <= sqrt(i); factor += 1) {
                if (i % factor == 0) {
                    prime = false;
                    break;
                }
            }
            if (prime){
                cout << i;
                break;
            }
        }
    }
    return 0;
}
