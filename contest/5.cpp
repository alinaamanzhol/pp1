#include <iostream>

using namespace std;
int main(){
    int n;
    cin >> n;
    
    int sum = 0;
    int temp = "";

    while (n > 0)
    {
        int d = n % 10;
        sum += d;
        n /= 10;
    }
    

    if(n % sum == 0)
    {
        cout << "YES" << endl;
    } else if(n % sum != 0)
    {
        cout << "NO" << endl;
    }

    





    return 0;
}