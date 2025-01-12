#include <iostream>
#include <map>
int main(){

    int n;
    cin >> n;

    map<int, int> m;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        m[a]++;
    }

    map<int, int>::reverse_iterator it = m.rbegin();
    cout << it->second;


    return 0;
}