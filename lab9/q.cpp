#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<int> v;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    vector<int>::iterator result = unique(v.begin(), v.end());
    v.erase(result, v.end());

    for(int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }

    return 0;
}