#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int n)
{
    if(n <= 1) return false;
    if(n == 2) return true;
   
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}

int main(){

    int n;
    cin >> n;

    int arr[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int max = 0;

    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(isprime(arr[i][j]))
            {
                if(arr[i][j] > max)
                {
                    max = arr[i][j];
                }
            }
        }
    }
    cout << max;

    return 0;
}