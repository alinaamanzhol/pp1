#include <iostream>
#include <set>
using namespace std;
int main(){

    int n;
    cin >> n;
    set<int> s;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }

    if(!s.empty())
    {
        cout << *s.begin();
    }

    return 0;
}