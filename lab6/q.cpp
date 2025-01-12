#include <iostream>
#include <iomanip>
using namespace std;

void girls(double n, double m)
{
    double percent = (m * 100) / n;

    cout << setprecision(6) << percent;
}

int main(){
    double n, m;

    cin >> n >> m;

    girls(n, m);
    return 0;
}