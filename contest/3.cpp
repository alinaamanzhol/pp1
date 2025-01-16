#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    char grid[n][m];

 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grid[i][j];
        }
    }

  
    int totalCabinets = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == 'x') {
                totalCabinets++;
            }
        }
    }

   
    cout << totalCabinets << endl;

    return 0;
}
