#include <iostream>
#include <map>
using namespace std;
int main(){

    int n;
    cin >> n;

    map<int, int> freq;

    for(int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        freq[k]++;
    }

    
    if(freq.size() < 2)
    {
        cout << "0" << endl;
    }

    map<int, int>::iterator it = freq.begin();
    it++;

    cout << it->second << endl;
    
    

    return 0;
}