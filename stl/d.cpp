#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    int del;
    cin >> del;

    v.erase(v.begin + del);

    for(int i = 0; i < n; i++)
    {
        cout << v.at(i) << " ";

    }

   


    return 0;
}