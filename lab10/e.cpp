#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
int main(){

    int count;
    cin >> count;
    vector<int> v(count);
;
    for(int i = 0; i < count; i++)
    {
        cin >> v.at(i);
    }

    map<int, int> m;

    for(int i = 0; i < count; i++)
    {
        m[v.at(i)]++;
    }

    int maxFreq = 0;

    for(map<int, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        if(it->second > maxFreq)
        {
            maxFreq = it->second;
        }
    }

    int coefficient = (count + 1) / 2;
    if(maxFreq <= coefficient) cout << "Possible";
    else cout << "Impossible";

    return 0;
}