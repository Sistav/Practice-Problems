#include <iostream>
using namespace std;

int main() {
    int64_t n,A,B,P;
    cin >> n;

    for(int i =0; i < n; i++){
        cin >> A >> B >> P;
        if (A * B != P){
            cout << "16 BIT S/W ONLY" << endl;
        }else{
            cout << "POSSIBLE DOUBLE SIGMA" << endl;
        }
    }
    return 0;
}
