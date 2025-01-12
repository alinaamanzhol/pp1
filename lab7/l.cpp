#include <iostream>
#include <set>
#include <cctype>
using namespace std;

bool isStrong(string &s)
{
    bool hasLower = false;
    bool hasUpper = false;
    bool hasDigit = false;

    for(int i = 0; i < s.size(); i++)
    {
        if(isupper(s[i])) hasUpper = true;
        if(islower(s[i])) hasLower = true;
        if(isdigit(s[i])) hasDigit = true;

        if(hasDigit && hasUpper && hasLower) return true;
    }
    return false;
}

int main(){
    int n;
    cin >> n;

    set<string> RobloxPasswords;

    for(int i = 0; i < n; i++)
    {
        string password;
        cin >> password;

        if(isStrong(password))
        {
            RobloxPasswords.insert(password);
        }

    }

    cout << RobloxPasswords.size() << endl;

    for(set<string>:: iterator it = RobloxPasswords.begin(); it != RobloxPasswords.end(); it++)
    {
        cout << *it << endl;
    }


    return 0;
}