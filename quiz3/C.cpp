#include <iostream>

using namespace std;
int main (){
    int z, y, a, b;
    cin >> z >> y >> a >> b;

    if(a > z) {
        cout << "No" << endl;
        return 0;
    } 
    int remaining_medium = z - a;
    if(b <= remaining_medium){
        cout << "Yes" << endl;
       } else {
            cout << "No" << endl;
        }

    return 0;
}