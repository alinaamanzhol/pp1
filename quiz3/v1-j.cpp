#include <iostream>
#include <deque>
using namespace std;
int main(){

    int n;
    cin >> n;

    deque<string> queue;

    for(int i = 0; i < n; i++)
    {
        string ppl;
        cin >> ppl;

        int command;
        cin >> command;

        if(command == 1)
        {
            queue.push_front(ppl);
        }

        else if(command == 0)
        {
            queue.push_back(ppl);
        }
    }

    for(deque<string>::iterator it = queue.begin(); it != queue.end(); it++)
    {
        cout << *it << " ";
    }

    

    return 0;
}