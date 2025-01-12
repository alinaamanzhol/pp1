#include <iostream>
using namespace std;

int main(){
    int hours, time;
    cin >> hours >> time;

    if (hours > 5 && time == 0) cout << hours * 5;
    if (hours < 2 && time == 0) cout << hours * 10;
    if (hours > 2 && hours < 5 && time == 0) cout << hours * 7;

    if (hours > 5 && time == 1) cout << (hours * 5) / 2 ;
    if (hours < 2 && time == 1) cout << (hours * 10) / 2;
    if (hours > 2 && hours < 5 && time == 1) cout << (hours * 7) / 2;











    return 0;
}