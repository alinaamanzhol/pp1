#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    int n, l ,r;
    cin >> n >> l >> r;

    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v.at(i);
    }

    
    

    reverse(v.begin() + l - 1 , v.begin() + r );
    
    for(int i = 0; i < n; i++)
    {
        cout << v.at(i) << " ";
    }


    return 0;
}