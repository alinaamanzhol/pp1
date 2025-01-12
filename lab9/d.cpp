#include <iostream>
#include <stack>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;


int main(){

    string s;
    cin >> s;
    stack<int> numbers;


    for(int i = 0; i < s.size(); i++)
    {
        int x = s[i] - '0';
        if(!numbers.empty() && sqrt(numbers.top() * 10 + x) == int(sqrt(numbers.top() * 10 + x)))
        {
            numbers.pop();
        }
        else
        {
            numbers.push(x);
        }
    }

    if(numbers.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        while(numbers.size() != 0)
        {
            cout << numbers.top();
            numbers.pop();
        }
    }

    return 0;
}