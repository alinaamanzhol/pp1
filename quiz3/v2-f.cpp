#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void palindrome(int n)
{
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        string s1 = s;
        reverse(s1.begin(), s1.end());
        if(s1 == s) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}

int main(){

    int n;
    cin >> n;

    palindrome(n);
    

    return 0;
}