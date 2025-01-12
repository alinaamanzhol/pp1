#include <iostream>

#include <algorithm>

using namespace std;
int main(){
    
    string s;
    cin >> s;
    string n = s;
    

    reverse(n.begin(), n.end());
    
    if(s == n) 
    {
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }
    




    return 0;
}