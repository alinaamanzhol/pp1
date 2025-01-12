#include <iostream>
#include <string>
using namespace std;
int main(){

    string s;
    cin >> s;
    bool letter = false;

    for(int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        
        if(ch >= 'A' && ch <= 'Z')
        {
            cout << ch << endl;
            letter = true;
            break;
        }

    }
    if(!letter)
    {
        cout << "-1" << endl;
    }

    return 0;
}