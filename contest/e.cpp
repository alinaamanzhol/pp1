#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s;
    long long sum = 0;
    cin >> s;

    
     int a1 = stoi(a);

     int digit = s[0] - '0';

     int a1 = stoi(s);
     int sum = 0;

    while(a1 > 0) 
    {
        int ost = a % 10;
        sum += ost;
        a1 /= 10;

    }

    sum -= digit;

    if(sum % 10 == digit) cout << "YES";
    else cout << "NO";









    return 0;
}