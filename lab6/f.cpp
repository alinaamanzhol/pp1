#include <iostream>
#include <string>
using namespace std;

string validateString(string s, int n)
{
    int cnt = 0;
    for(int i = 0; i < s.size(); i++)
    { 
        if(isdigit(s[i])) 
        {
            cnt++;
        }

    }
    if(cnt >= n)
    {
        return "YES";
    } else{
        return "NO";
    }
}

int  main(){
    string s;
    cin >> s;

    int n;
    cin >> n;

    cout << validateString(s, n) << endl;

    return 0;

}
