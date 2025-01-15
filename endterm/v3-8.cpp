#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
using namespace std;
int main(){

    int n;
    cin >> n;
    vector<double> v(n);

    double sum = 0.0;

    for(int i = 0; i < n; i++)
    {
        cin >> v.at(i);
        sum += v.at(i);
    }

    double arithmetic = sum / n;

    cout << fixed << setprecision(2) << arithmetic << endl;

    for(int i = 0; i < n; i++)
    {
        double dif = arithmetic - v.at(i);
        double sq = pow(dif, 2);
        cout << fixed << setprecision(2) << sq << endl; 
    }

    return 0;
}