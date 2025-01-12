#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int n, a1, r;
    cin >> n >> a1 >> r;

    for(int i = 0; i < n; i++)
    {
        cout << a1 * pow(r, i) << " ";
    }
    cout << endl;

    int sum = a1 * (1 - pow(r, n)) / (1 - r);

    cout << "sum: " << sum;

    return 0;
}