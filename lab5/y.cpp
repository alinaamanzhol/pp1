#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;

    int cnt = 0;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'a') cnt++;
        if(s[i] == 'i') cnt++;
        if (s[i] == 'o') cnt++;
        if(s[i] == 'e') cnt++;
        if(s[i] == 'u') cnt++;

        
    }
    cout << cnt;



    return 0;
}