#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){

    string s;
    cin >> s;

    int sum = 0;

    for(int i = 0; i < s.size(); i++)
    {
        if(isdigit(s[i]))
        {
            int num = s[i] - '0';
            sum += num;
        }
    }

    cout << sum;

    return 0;
}