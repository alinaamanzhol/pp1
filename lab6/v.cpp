#include <iostream>
using namespace std;

    string foo(int decimal)
    {
    string hexNumber= "";

    while(decimal > 0)
    {
        int remainder = decimal % 16;
        if(remainder < 10)
        {
            hexNumber = char(remainder + '0') + hexNumber;
        } else 
        {
            hexNumber = char(remainder - 10 + 'A') + hexNumber;
        }
        decimal /= 16;
    }
    return hexNumber;
    }

int main(){
    int decimal;
    cin >> decimal;

    cout << foo(decimal) << endl;
    return 0;
}