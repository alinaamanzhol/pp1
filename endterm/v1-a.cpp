#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(){

    int n;
    cin >> n;
    map<pair <int, int>, int > m;

    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        pair<int, int> SortedPair = make_pair(min(a, b), max(a, b));
        cout << m[SortedPair] << endl;
        m[SortedPair]++;
    }


    return 0;
}