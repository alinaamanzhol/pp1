#include <iostream>
#include <vector>
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

    cout << m.rbegin()->first;

    return 0;
}