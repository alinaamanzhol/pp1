#include <iostream>
#include <string>
using namespace std;

string Pos(string str)
{
    string result;

    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == '#')
        {
            if(!result.empty())
            {
                result.pop_back(str[i]);
            }
        }
        else result.push_back(str[i]);
    }
    return result;
}

int main(){

    string s, t;
    cin >> s >> t;

    string s1 = Pos(s);
    string t1 = Pos(t);

    if(s1 == t1) cout << "True";
    else cout << "No";

    return 0;
}