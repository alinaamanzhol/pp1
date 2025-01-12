#include <iostream>
using namespace std;
int main(){

    string s;
    cin >> s;

    bool isIp = true;

    for(int i = 0; i < s.size(); i++)
    {
        if(i % 2 == 0)
        {
            int digit = s[i] - '0';
            if(figit < 0 && digit > 256)
            {
                isIp = false;
                break;
            }
        }
        if(i % 2 != 0)
        {
            if(s[i] != '.')
            {
                isIp = false;
                break;
            }
        }
    }

    if(isIp) cout << 1;
    else cout << 0;

    return 0;
}