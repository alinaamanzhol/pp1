#include <iostream>
#include <set>
#include <string>
using namespace std;


bool hasUniqueDigits(int number) {
    string numStr = to_string(number); 
    set<char> digitSet(numStr.begin(), numStr.end()); 
    return digitSet.size() == numStr.size(); 
}

int main() {
    int l, r;
    cin >> l >> r;

    for (int i = l; i <= r; i++) {
        if (hasUniqueDigits(i)) {
            cout << i << endl; 
            return 0;
        }
    }

  
    cout << "Understandable, have a great day" << endl;
    return 0;
}
