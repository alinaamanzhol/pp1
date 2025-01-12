#include <iostream>
using namespace std;
int findMax(int a, int b, int c, int d)
{
    int max = a;

    if(b > max)
    {
        max = b;
    }
    if(c > max)
    {
        max = c;

    }
    if(d > max)
    {
        max = d;
    }
    return max;
}

int main(){

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << findMax(a, b, c, d) << endl;
    return 0;
}