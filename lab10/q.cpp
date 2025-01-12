#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main(){

    string s;
    cin >> s;
    stack<char> stk;

     for(int i = 0; i < s.size(); i++)
    {
        
        if(!stk.empty() && stk.top() == s[i])
        {
            stk.pop();
        }
        else
        {
            stk.push(s[i]);
        }
    }

    if(stk.empty())
    {
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}