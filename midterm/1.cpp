#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int matrix[100][100]; // Assuming maximum size is 100x100 as a constraint

    // Read the matrix
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Process each element and check divisibility
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            int product = i * j;
            
            // If product is 0, skip checking as division by zero is undefined
            if (product == 0) {
                cout << 0 << " ";
            } else {
                // Check if the matrix element is divisible by the product
                if (matrix[i][j] % product == 0) {
                    cout << matrix[i][j] / product << " ";
                } else {
                    cout << 0 << " ";
                }
            }
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}


    
   