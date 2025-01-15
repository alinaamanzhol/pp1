#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;
int main(){

    string s;
    cin >> s;
    
    int sum = 0;
     int cnt = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(isdigit(s[i])){
            sum += s[i] - '0';
        }

        else if(!isdigit(s[i])&&!isalpha(s[i]))
        {
            cnt++;
        }
    }


    cout << sum << " " << cnt;

    return 0;
}