#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++)
    {
        if(isalpha(s[i]))
        {
            if(s[i] == 'z')
            {
                s[i] = 'a';
            }
            else {
                s[i] = s[i] + 1;
            }
            
        }
    }
    cout << s;
    





    return 0;
}