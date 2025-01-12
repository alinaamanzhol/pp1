#include <iostream>
using namespace std;

string postalCode(int a, int b, string s)
{
    if(s.size() != a + b + 1) return "No";

    if(s[a] != '-') return "No";

    for(int i = 0; i < a; i++)
    {
        if(!isdigit(s[i]))
        {
            return "No";
        }
    }

    for(int i = b; i < s.size(); i++)
    {
        if(!isdigit(s[i]))
        {
            return "No";
        }
    }
    return "Yes";
}

int main(){

    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;


    cout << postalCode(a, b, s);

    return 0;
}