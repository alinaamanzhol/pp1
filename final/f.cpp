#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(){
    
    int n;
    cin >> n;

    vector<string> v;

    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(foo(a, b));
    }

    for(int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << endl;
    }


    return 0;
}
