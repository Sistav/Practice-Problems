#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if (a < b && c < d){
        cout << "Go to the department store" << endl;
    }
    else if (a < b){
        cout << "Go to the grocery store" << endl;
    }
    else if (c < d) {
        cout << "Go to the pharmacy" << endl;
    }else{
        cout << "Stay home" << endl;
    }
    return 0;
}
