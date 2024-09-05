#include <iostream>
#include <vector>

using namespace std;

int main() {
    int amount_gates,amount_planes;
    cin >> amount_gates;
    cin >> amount_planes;

    vector<int> gaytes;
    for (int i = 1; i < amount_gates+1; ++i) {
        gaytes.push_back(i);
    }
    int current_plane;
    bool closed = false;
    int iterator = 0;
    while( iterator < amount_planes and !closed) {
        cin >> current_plane;
        closed = true;
        for (int j = gaytes.size()-1; j >= 0; --j) {
            if (gaytes[j] <= current_plane) {
                gaytes.erase(gaytes.begin() + j);
                closed = false;
                break;
            }
        }
        iterator++;
    }
    cout << amount_gates-gaytes.size() << endl;
    return 0;
}
