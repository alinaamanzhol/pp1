#include <iostream>
using namespace std;

void foo(int n)
{
    int sum = 0;
    int lastnum = n % 10;
    while(n > 0)
    {
        sum += n % 10;
        n /= 10;
        
    }
    if(sum % lastnum == 0) cout << "Yes";
    else cout << "No";
}

int main(){

    int n;
    cin >> n;

    foo(n);


    return 0;
}