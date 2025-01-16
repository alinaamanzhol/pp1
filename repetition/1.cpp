#include <iostream>
using namespace std;
int main(){

    int n;
    cin >> n;

    int b = n % 100;

    cout << n / 100 << endl << b;

    return 0;
}