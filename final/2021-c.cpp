#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){

    int n;
    cin >> n;

    for(int i = 100; i < 1000; i++)
    {
        int sum = 0;
        int num = i;
        while(num != 0)
        {
            sum += num % 10;
            num /= 10;
            
        }

        if(sum == n)
        {
            cout << i << endl;
        }
    }

    return 0;
}