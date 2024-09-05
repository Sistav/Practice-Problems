#include <iostream>
using namespace std;
int main() {
    int S,R;

    cin >> S >> R;
    if ((S*S) > (R * R * 3.14)){
        cout << "SQUARE";
    }else{
        cout << "CIRCLE";
    }

    return 0;
}
