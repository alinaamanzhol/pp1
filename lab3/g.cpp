#include <iostream>

using namespace std;
int main(){
    long int n, sum=0;
    cin >> n;
    long int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum;



return 0;
}