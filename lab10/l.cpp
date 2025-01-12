#include <iostream>
#include <map>
#include <algorithm>
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

    if(m.size() < 2)
    {
        cout << "0" << endl;
    }
   

    auto it = m.rbegin();
    it++;

    cout << it->second << endl;

    return 0;
}