#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;

    

    reverse(s.begin(), s.end());

 

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'a' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'e')
        {
            s[i] = '*';
        }
        
        
    }

    

    cout << s << endl;





    return 0;
}