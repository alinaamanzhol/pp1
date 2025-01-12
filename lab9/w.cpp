#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool palindrome(string s)
{
    string t = s;
    reverse(t.begin(), t.end());
    if(t == s)
    {
        return true;
    }
    return false;
}

int main(){

    string s;
    cin >> s;
    sort(s.begin(), s.end());

    do
    {
        
        if(palindrome(s))
        {
            cout<<"ZA WARUDO TOKI WO TOMARE";
            return 0;
        }
    } while (next_permutation(s.begin(), s.end()));
    cout << "JOJO";
    

    return 0;
}