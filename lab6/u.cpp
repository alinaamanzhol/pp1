#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findMaxGcd(int arr[], int n)
{
    int maxgcd = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            int currentgcd = gcd(arr[i], arr[j]);
            if (currentgcd > maxgcd)
            {
                maxgcd = currentgcd;
            }

        }
    }
    return maxgcd;
}

int main(){
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << findMaxGcd(arr, n) << endl;



    return 0;
}