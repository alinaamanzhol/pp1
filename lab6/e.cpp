#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculateHypotenuse(double a, double b)
{
    return sqrt(a * a + b * b);
}

int main(){
    double a, b;

    cin >> a >> b;

    double hypotenuse = calculateHypotenuse(a, b);

    cout << setprecision(4) << hypotenuse << endl;

    return 0;
}