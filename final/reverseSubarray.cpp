#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    int n;
    cin >> n;

    int l, r;
    cin >> l >> r;

    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v.at(i);
    }
    l--;
    r--;

    reverse(v.begin() + l, v.end() - r);
    
    for(int i = 0; i < n; i++)
    {
        cout << v.at(i) << " ";
    }

    return 0;
}