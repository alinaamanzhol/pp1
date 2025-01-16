#include <iostream>
#include <set>

using namespace std;

int main(){

    int n; 
    cin >> n;

    set<int> m;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        m.insert(a);
    }

    for(set<int>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout << *it << " ";
    }



    return 0;
}