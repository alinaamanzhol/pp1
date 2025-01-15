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

    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += v.at(i);
    }
    cout << sum << endl;

    vector<int> res;

    for(int i = 0; i < v.size(); i++)
    {
        int num = v.at(i) * i;
        res.push_back(num);
    }

    for(int i = 0; i < res.size(); i++)
    {
        cout << res.at(i) << endl;
    }

    return 0;
}