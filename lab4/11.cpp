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

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int k;
    cin >> k;


    return 0;
}