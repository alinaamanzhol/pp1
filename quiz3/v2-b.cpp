#include <iostream>
using namespace std;

bool IsIn(int x1, int y1, int x2, int y2, int a, int b)
{
    return(x1 <= a && x2 >= a) && (y2 <= b && y1 >= b);
}

int main(){

    int x1, y1, x2, y2, a, b;
    cin >> x1 >> y1 >> x2 >> y2 >> a >> b;

    if(IsIn(x1, y1, x2, y2, a, b)) 
    {
        cout << "Yes";
    }
    else 
    {
        cout << "No";
    }

    return 0;
}