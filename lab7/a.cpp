#include <iostream>
#include <vector>
using namespace std;

int findMissingSKU(const vector<int>& arr, int n) {
   
    int expected_sum = n * (n + 1) / 2;
    
    int actual_sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        actual_sum += arr[i];
    }
    
    return expected_sum - actual_sum;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << findMissingSKU(arr, n) << endl;
    return 0;
}
