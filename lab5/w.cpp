#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    string t;
    cin >> s >> t;

    if(s.find(t) != string::npos)
    {
        cout << "YES";
    }
    else{
        cout << "NO";
    }









    return 0;
}