#include <iostream>
using namespace std;
int main() {
    int quarters,first,second,third;
    cin >> quarters;
    cin >> first;
    cin >> second;
    cin >> third;

    int counter = 0;

    while (quarters > 0){
        quarters--;
        counter++;
        first++;
        first %= 35;
        quarters += 30 * (first == 0);

        if (quarters == 0){
            break;
        }

        quarters--;
        counter++;
        second++;
        second %= 100;
        quarters += 60 * (second == 0);

        if (quarters == 0){
            break;
        }
        quarters--;
        counter++;
        third++;
        third %= 10;
        quarters += 9 * (third == 0);

    }
    cout << "Martha plays " << counter <<" times before going broke.";
}
