#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
int main(){

    string a, b;
    cin >> a >> b;

    int overlapAB = 0;
    
    for(int i = 0; i < min(a.size(), b.size()))
    {
        if(a.substr(a.size() - i) == b.substr(0, i))
        {
            overlapAB = i;
        }
    }

    int overlapBA = 0;

    for(int i = 0; i < min(a.size(), b.size()))
    {
        if(b.substr(b.size() - i) == a.substr(0, i))
        {
            overlapBA = i;
        }
    }

    if(overlapAB >= overlapBA)
    {
        cout << a + b.substr(overlapAB) << endl;
    }
    else
    {
        cout << b + a.substr(overlapBA) << endl;
    }

    return 0;
}