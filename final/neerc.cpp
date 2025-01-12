#include <iostream>
#include <vector>
using namespace std;
int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    int max = 0;

    for(int i = 0; i < n; i++)
    {
        max += min(k, arr[i]);
    }

    cout << max;

    return 0;
}