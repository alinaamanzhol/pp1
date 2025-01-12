#include <iostream>
using namespace std;

int bin(int n)
{
    int cnt = 0;
    while(n > 0)
    {
        if(n % 2 == 1) cnt++;
        n /= 2;
    }
    return cnt;
}

int main(){

    int n, k;
    cin >> n >> k;

    int sum = 0;

    for(int m = n - 1; m >= 1; m -= 2)
    {
        if(bin(n) <= k)
        {
            cout << m << endl;
            return 0;
        }
    }

    return 0;
}