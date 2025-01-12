#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char c;
    cin >> c;
    string s;
    cin >> s;
    string news = "";

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == c)
        {
            continue;
        }
        news += s[i];
    }
    cout << news;




    return 0;
}