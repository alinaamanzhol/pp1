#include <iostream>
using namespace std;
int main(){

    int x, y;
    cin >> x >> y;

    if(x > y)
    {
        int dif = x - y;
        cout << dif;
    }
    else if(x < y || x == y)
    {
        int sum = x + y;
        cout << sum;
    }
    

    return 0;
}