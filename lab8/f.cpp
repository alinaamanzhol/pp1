#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){

    string s;
    cin >> s;

    stack<char> stk;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(')
        {
            stk.push(s[i]);
        }
        if(s[i] == ')')
        {
            if(stk.empty())
            {
                cout << "NO";
                return 0;
            }
            stk.pop();
        }
    }

    if(stk.empty())
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }


    return 0;
}