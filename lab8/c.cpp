#include <iostream>
#include <map>
using namespace std;

int main(){

    int n;
    cin >> n;
    map<int, int> m;

    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        m[num]++;
    }

    int cnt = 0;

    for(map<int, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        if(it->second >= 2) cnt++;
    }

    cout << cnt;


    return 0;
}