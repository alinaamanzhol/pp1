#include <iostream>
#include <stack>
using namespace std;
int main(){

    int n;
    cin >> n;

    stack<int> main;
    stack<int> max;

    for(int i = 0; i < n; i++)
    {
        string command;
        cin >> command;
        
        if(command == "add")
        {
            int digit;
            cin >> digit;
            main.push(digit);

            if(max.empty() || digit >= max.top())
            {
                max.push(digit);
            }
            max.push(max.top());
        }
        if(command == "delete")
        {
            if(!main.empty())
            {
                max.pop();
                main.pop();
            }
        }
        if(command == "getcur")
        {
            if(!main.empty()) cout << main.top() << endl;
            else cout << "error" << endl;
        }
        if(command == "getmax")
        {
            if(!max.empty()) cout << max.top() << endl;
            else cout << "error" << endl;
        }
    }

    return 0;
}