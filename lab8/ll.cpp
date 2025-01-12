#include <iostream> 
#include <vector> 
#include <algorithm> 
 
using namespace std; 
 
int main() 
{ 
    int count; 
    cin >> count; 
 
    vector<pair<int, int>> arr(count); 
 
    for(int i = 0; i < count; i++) 
    { 
        int first, second; 
        cin >> first >> second; 
 
        int sum = first + second; 
 
        arr.push_back(make_pair(sum, i + 1)); 
    } 
 
    sort(arr.begin(), arr.end()); 
     
    for(int i = 0; i < arr.size(); i++) 
    { 
        if(arr.at(i).second != 0) cout << arr.at(i).second << " "; 
    } 
 
 
    return 0; 
}