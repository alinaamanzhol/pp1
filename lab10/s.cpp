#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N; // Number of stores
    cin >> N;
    
    vector<int> open(1440, 0); // Track open status for each minute of the day
    
    for (int i = 0; i < N; i++) {
        int A, B, C, D;
        cin >> A >> B >> C >> D;
        
        int start = A * 60 + B; // Start time in minutes
        int end = C * 60 + D;   // End time in minutes
        
        if (start <= end) {
            // Store is open within the same day
            for (int t = start; t < end; t++) {
                open[t]++;
            }
        } else {
            // Store is open across midnight
            for (int t = start; t < 1440; t++) {
                open[t]++;
            }
            for (int t = 0; t < end; t++) {
                open[t]++;
            }
        }
    }
    
    // Count minutes where all stores are open
    int overlap = 0;
    for (int t = 0; t < 1440; t++) {
        if (open[t] == N) {
            overlap++;
        }
    }
    
    cout << overlap << endl;
    return 0;
}
