#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int numbers[n];

    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    int length = sizeof(numbers)/sizeof(numbers[0]);
    sort(numbers,numbers + length);
    for(int i=0; i<length; i++)
    {
        cout<<numbers[i] <<endl;
    }
    return 0;
}
