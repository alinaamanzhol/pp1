#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
    while(b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int res = arr[0];

    for(int i = 1; i < n; i++)
    {
        res = gcd(res, arr[i]);
    }
    cout << res;

    return 0;
}