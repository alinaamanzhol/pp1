#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;

    string s1 = reverse(s.begin(), s.end());

    if(s1 == s)
    {
        if(s.find_first_not_of(s[0]) == string :: npos)
        {
            cout << 0;
        }
        else cout << s.size() - 1;

    }

    else
    {
        cout << s.size();
    }





    return 0;
}
