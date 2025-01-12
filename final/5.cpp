#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    vector<int> v;
    while(cin >> n && n != 0)
    {
       v.emplace_back(n);
    }

    for(int i = 0; i < v.size(); i += 2)
    {
        if(i + 1 < v.size())
        {
            cout << v[i] * v[i + 1] << " ";
        }
        else
        {
            cout << v[i] << " ";
        }
    }

    return 0;
}