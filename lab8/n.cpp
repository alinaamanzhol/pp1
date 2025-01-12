#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> arr;    
    vector<int> v;    

    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr.insert(a);  
        v.push_back(a); 
    }

    int cnt = 0;

    
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int xor_value = v[i] ^ v[j]; 
            
            if(arr.count(xor_value) > 0) cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
