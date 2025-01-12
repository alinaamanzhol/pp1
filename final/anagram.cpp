#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){

    string s, t;
    cin >> s >> t;
    sort(t.begin(), t.end());
    sort(s.begin(), s.end());

    if(s == t)
    {
        cout << "Yes";
    }
    else cout << "No";

    return 0;
}