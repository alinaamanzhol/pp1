#include <iostream>
using namespace std;

string chess(int x1, int y1, int x2, int y2)
{
    if(x1 == x2 && y1 == y2) return "Yes";
    else if((x1 == x2 && y1 != y2) || (x1 != x2 && y1 == y2)) return "Yes";
    else return "No";
}

int main(){

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    cout << chess(x1, y1, x2, y2);

    return 0;
}