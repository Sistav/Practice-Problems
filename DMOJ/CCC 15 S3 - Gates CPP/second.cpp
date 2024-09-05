#include <iostream>
#include <vector>

using namespace std;

int main() {
    int amount_gates,amount_planes;
    cin >> amount_gates;
    cin >> amount_planes;

    vector<bool> gaytes(amount_gates, false);

    int current_plane;
    bool closed = false;
    int iterator = 0;
    int counter = 0;

    while( iterator < amount_planes and !closed) {
        cin >> current_plane;
        for (int j = current_plane-1; j >= 0; --j) {
            closed = true;
            if (!gaytes[j]){
                gaytes[j] = true;
                counter += 1;
                closed = false;
                break;
            }
        }
        iterator++;
    }
    cout << counter << endl;
    return 0;
}
