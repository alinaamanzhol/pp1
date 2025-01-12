#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    vector<int>::iterator mm = unique(v.begin(), v.end());
    v.erase(mm, v.end());

    for(int i = 1; i <= v.size(); i++)
    {
        cout << i << " " << v[i - 1] << endl;
    }

    return 0;
}