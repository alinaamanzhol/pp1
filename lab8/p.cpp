#include <iostream>
#include <stack>
using namespace std;
int main(){

    int n;
    cin >> n;

    stack<int> stk;

    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        while(!stk.empty() && stk.top() <= num)
        {
            stk.pop();
        }
        stk.push(num);
        cout << stk.size() << " ";
    }

    return 0;
}