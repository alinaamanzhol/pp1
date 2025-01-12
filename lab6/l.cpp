#include <iostream>
using namespace std;

string validnum(string s, int n)
{
    int cnt = 0;
    for(int i = 0; i < s.size(); i++)
    {
        
        if(isdigit(s[i]))
        {
            cnt++;
        }
    } 
    if(cnt < n)
    {
        return "Not valid";
    }
    return "Valid";
}

int main(){
    string s;
    cin >> s;

    int n;
    cin >> n;

    cout << validnum(s, n) << endl;



    return 0;
}