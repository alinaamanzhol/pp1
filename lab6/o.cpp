#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    int sum = 0;
    while(n > 0)
    {
        sum = sum + n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    int n;
    cin >> n;

    int sum = sumOfDigits(n);

    int lastDigit = n % 10;

    if(lastDigit != 0 && sum % lastDigit == 0)
    {
        cout << "Yes" << endl;

    } else{
        cout << "No" << endl;
    }

    return 0;
}