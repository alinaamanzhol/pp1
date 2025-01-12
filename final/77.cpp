#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    bool destroyed = true;
    int total = 0;

    while (destroyed) {
        destroyed = false;

        for (int i = 0; i < v.size();) {
            int cnt = 1;

            // Count consecutive identical elements
            while (i + cnt < v.size() && v[i] == v[i + cnt]) {
                cnt++;
            }

            // If 3 or more identical elements are found
            if (cnt >= 3) {
                total += cnt;
                v.erase(v.begin() + i, v.begin() + i + cnt); // Erase the group
                destroyed = true;
            } else {
                i++; // Move to the next element
            }
        }
    }

    cout << total;

    return 0;
}
