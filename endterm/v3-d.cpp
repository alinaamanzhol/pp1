
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> heights(N);
    for (int i = 0; i < N; i++) {
        cin >> heights[i];
    }

    int askarHeight;
    cin >> askarHeight;

    int position = N + 1; // Default position is at the end
    for (int i = 0; i < N; i++) {
        if (askarHeight > heights[i]) {
            position = i + 1; // Found the first taller student
            break;
        }
        if (askarHeight == heights[i]) {
            position = i + 2; // Stand after the last student of the same height
        }
    }

    cout << position << endl;
    return 0;
}

