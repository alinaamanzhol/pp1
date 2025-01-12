#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int n)
{
    if(n <= 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int i = 3; i < sqrt(n); i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}

int prime(int n)
{
    int top = n;
    int bot = n;
    while(true)
    {
    
    if(isprime(top)) return top;
    if(isprime(bot)) return bot;
    bot--;
    top++;
    }
}

int main(){

    int n;
    cin >> n;

    cout << prime(n);

    return 0;
}