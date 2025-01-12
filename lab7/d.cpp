#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;

    int k;
    cin >> k;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
    {
       cin >> arr[i];
    }

    int sum = 0;
    
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int result = sum / n;

    cout << abs(result - k) << endl;


    return 0;
}