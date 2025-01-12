#include <iostream>
#include <set>
#include <string>
using namespace std;

bool isUnique(int n) {
    string num = to_string(n);
    set<char> temp;

    for (int i = 0; i < num.size(); i++) {
        if (temp.find(num[i]) != temp.end()) return false;
        else temp.insert(num[i]);
    }
    return true;
}

int main() {
    int l, r;
    cin >> l >> r;

    for (int i = l; i <= r; i++) {  
        if (isUnique(i)) {
            cout << i;
            return 0;
        }
    }

    cout << "Understandable, have a great day";

    return 0;
}
