#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
#include <iomanip>
using namespace std;
int main(){

    int l, r, n;
    cin >> l >> r >> n;

    int arr[n];

    srand(time(0));

    double sum = 0.0;

    for(int i = 0; i < n; i++)
    {
        arr[i] = l + rand() % (r - l + 1);
        sum += arr[i];
    }

 

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    double size = n;

    double mean = sum / size;

    cout << fixed << setprecision(3) << mean;
    

    return 0;
}