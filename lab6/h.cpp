#include <iostream>

using namespace std;

string ValidNumber(string s)
{
    for(int i = 0; i < s.size();i++)
    {
        char c = s[i];
        if((c - '0') % 2 != 0)
        {
            return "Not valid";
        }
    }
    return "Valid";
}


int main(){
    string s;
    cin >> s;

    cout << ValidNumber(s) << endl;



    return 0;
}