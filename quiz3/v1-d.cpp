#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){

    int n;
    cin >> n;

    set<string> available;

    for(int i = 0; i < n; i++)
    {
        string one;
        cin >> one;
        available.insert(one);
    }

    int m;
    cin >> m;

   

    for(int i = 0; i < m; i++)
    {
        string one;
        cin >> one;
        if(available.find(one) == available.end()) continue;
        else cout << one << endl;
    }

    
    return 0;
}