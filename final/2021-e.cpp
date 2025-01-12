#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; // Number of rows
    cin >> n;

    // Loop through rows
    for (int i = 0; i < n; i++) {
        // Loop through columns
        for (int j = 0; j < n; j++) {
            if (i + j == n - 1) {
                // Print the number in diagonal positions
                cout << (i + 1); // Diagonal position value
            } else {
                // Print "." for all other positions
                cout << ".";
            }
        }
        cout << endl; // Move to the next row
    }

    return 0;
}
