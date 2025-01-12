#include <iostream>
using namespace std;

int main(){
    string s;

    cin >> s;

    int max_len = 1;
    

    for(int i = 0; i < s.size(); i++)
    { int cnt = 1;
        for(int i = j; j < s.size(); j++)
        {
            if(s[i] == s[j] && s[j] == s[j + 1]) cnt++;

        }
        if(max < cnt)
        {
            max = cnt;
            c = s[i];
        }
        cout << c << " " << max;
    }





    return 0;
}