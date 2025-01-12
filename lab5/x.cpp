#include <iostream>

#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    int sumOdd = 0;
    int sumEven = 0;

    for(int i = 0; i < s.length(); i++)
    {
        int temp = s[i] - '0';
        if(i % 2 == 0)
        {
            sumEven += temp;
        }
        else
        {
            sumOdd += temp;
        }
        
    }

    if(sumEven == sumOdd) cout << "YES";
    else cout << "NO";




    return 0;
}