#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    vector<int> v;
    int n;

    while(cin >> n && n != 0)
    {
        v.push_back(n);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++)
    {
       cout << v.at(i) << " ";
    }
    return 0;
}