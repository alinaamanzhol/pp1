#include <iostream>
using namespace std;

int noc(int arr[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];

    }
    return sum / n;
}

int main(){
    int n;
    cin >> n;

    
    int k;

    cin >> k;
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int average = noc(arr, n);
    

    cout << abs(average - k) << endl;


    return 0;
}
