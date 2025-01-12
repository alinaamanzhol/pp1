#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


int index = 0;


long long generate() {
    return powl(index, index++);
}

int main() {
    int n;
    cin >> n;

   
    vector<long long> sequence(n + 1);

   
    index = 0;
    generate(sequence.begin(), sequence.end(), generate);

   
    for (int i = 0; i <= n; ++i) {
        if (i > 0) cout << " ";
        cout << sequence[i];
    }

    return 0;
}

