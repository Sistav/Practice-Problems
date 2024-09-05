#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    int rock;
    cin >> rock;
    int list[rock];
    for (int i = 0; i < rock; i++)
    {
        cin >> list[i];
    }
    int highest = 0;
    int highest_num = 0;
    vector<int> checked;

    for (int i = 0; i < rock; i++)
    {
        if (!(std::count(checked.begin(), checked.end(), list[i]))){
            checked.push_back(list[i]);
            int n = sizeof(list) / sizeof(list[0]);
            int value = count(list, list + n, list[i]) * list[i];
            if (value > highest){
                highest_num = list[i];
                highest = value;
        }

        }
        

            
    }
    cout << highest_num;
    

}




