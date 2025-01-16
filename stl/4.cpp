#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){

    int n;
    cin >> n;

    queue<int> serves;

    for(int i = 0; i < n; i++)
    {
        string command;
        cin >> command;
        
        if(command == "add")
        {
            int digit;
            cin >> digit;
            serves.push(digit);
        }
        if(command == "serve")
        {
            if(serves.empty()) cout << "queue is empty" << endl;
        
        else
        {
            cout << serves.front() << endl;
            serves.pop();
        }
    }
    }



    return 0;
}