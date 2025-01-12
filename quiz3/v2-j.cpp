#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string foo(int n)
{
    if(n == 0) return "0";

    string result = "";
    while(n > 0)
    {
        result += to_string(n % 7);
        n /= 7;
    }
    reverse(result.begin(), result.end());
    return result;
    
}

int main(){

    int n;
    cin >> n;

    cout << foo(n) << endl;

    return 0;
}