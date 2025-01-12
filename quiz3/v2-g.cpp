#include <iostream>
using namespace std;

string canCoverRoom(int a, int b, int x, int y) {
  
    if ((x == a && y == b) || (x == b && y == a)) {
        return "Thanks, Nurbek";
    }
    
 
    if ((x == a && y >= b) || (x == b && y >= a) || (y == a && x >= b) || (y == b && x >= a)) {
        return "Thanks, Nurbek";
    }

    if ((x >= a && y >= b) || (x >= b && y >= a)) {
        return "Thanks, Nurbek";
    }
    
 
    return "Impossible";
}

int main() {
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    cout << canCoverRoom(a, b, x, y) << endl;
    return 0;
}
