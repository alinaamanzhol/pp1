#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v.at(i);

    }

    int k;
    cin >> k;

    k %= n;

    if(k < 0)
    {
        k += n;
    }

    for(int i = 0; i < v.size(); i++)
    {
        cout << v.at((i + n - k) % n) << " ";
    }


    return 0;
}