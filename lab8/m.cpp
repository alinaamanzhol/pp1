#include <iostream>
#include <queue>
using namespace std;
int main(){

    int n;
    cin >> n;

    queue<string> boys;

    for(int i = 0; i < n; i++)
    {
        int act;
        cin >> act;

        if(act == 1)
        {
            string name;
            cin >> name;
            boys.push(name);
        }
        else if(act == 2)
        {
            if(!boys.empty())
            {
                boys.pop();
            }
        }
        if(boys.empty()) cout << "queue is empty" << endl;
        else cout << boys.front() << endl;
        
    }

    return 0;
}