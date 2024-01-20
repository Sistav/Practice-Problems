#include <iostream>
#include "cmath"

using namespace std;

int main() {
    uint64_t n;
    cin >> n;
    if (n <= 2) {
        cout << 2;
    } else {
        bool prime;
        uint64_t i = n;
        while (true) {
            prime = true;
            if (i % 2 == 1) {
                for (int factor = 3; factor <= sqrt(i); factor += 2) {
                    if (i % factor == 0) {
                        prime = false;
                        break;
                    }
                }
                if (prime) {
                    cout << i;
                    break;
                }
            }
            i++;
        }
    }
    return 0;
}
