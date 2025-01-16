#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
int main(){

    string n;
    getline(cin, n);

    stringstream ss(n);

    vector<int> v;
    int num;

    while(ss >> num)
    {
       v.push_back(num);
    }

    reverse(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }

    return 0;
}