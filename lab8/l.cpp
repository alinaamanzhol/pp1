#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


bool compareSums(const pair<pair<int, int>, int>& a, const pair<pair<int, int>, int>& b) {
    return (a.first.first + a.first.second) < (b.first.first + b.first.second);  
}

int main() {
    int n;
    cin >> n; 
    vector<pair<pair<int, int>, int>> arr(n); 

   
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        arr[i] = {{a, b}, i + 1};  
    }

  
    sort(arr.begin(), arr.end(), compareSums);


    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i].second << " "; 
    }
    cout << endl;

    return 0;
}

