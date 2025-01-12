#include <iostream>
using namespace std;
int main(){
    int passenger;
    cin >> passenger;
    int busik;



    while (N > 0) 
    {
        busik++;

        if (busik % 7 == 0) continue;

        else if (busik % 2 == 0) busik -= 4;
        else if (busik % 2 != 0) busik += 3;
        else if (passengers < 0) passengers = 0;

        cout << busik << endl;

    }



    return 0;
}