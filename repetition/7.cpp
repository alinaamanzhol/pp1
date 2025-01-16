#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>
using namespace std;
int main(){

    string n;
    getline(cin, n);

    vector<int> v;
    stringstream ss(n);
    int num;
    while(ss >> num)
    {
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    int size = v.size();

    for(int i = 0; i < v.size(); i++)
    {
        cout << v.at(size- i - 1) << " ";
        cout << v.at(i) << " ";
    }



    return 0;
}