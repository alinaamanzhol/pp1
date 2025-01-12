#include <iostream>

#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;

    char c;
    cin >> c;

    int n;
    cin >> n;

    int cnt = 0;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == c)
        {
            cnt++;

        }
    }

    if(cnt == n)
    {
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }







    return 0;
}