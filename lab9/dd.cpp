#include <iostream>
#include <string>
#include <stack>
#include <cmath>
using namespace std;
int main(){

    string s;
    cin >> s;

    stack<char> stk;

    for(int i = 0; i < s.size(); i++)
    {
        if(stk.empty()) stk.push(s[i]);

        else
        {
            string num = "";
            num += stk.top();
            num += s[i];
            int numd = stoi(num);
            if(sqrt(numd) == (int)sqrt(num)) stk.pop();
            else stk.push(s[i]);
        }
    }

    if(stk.empty()) cout << "Stack is empty";
    else
    {
        while(!stk.empty())
        {
            cout << stk.top();
            stk.pop();
        }
    }

    return 0;
}