#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
int main(){

    string s;
    cin >> s;

    string s1 = "";

    for(int i = 0; i < s.size(); i++)
    {
        if(isalpha(s[i]))
        {
            s1 += tolower(s[i]);
        }
    }

    sort(s1.begin(), s1.end());

    char ch[26] = {0};

  

    for(int i = 0; i < s1.size(); i++)
    {
       
        
        for(int j = i; j < s1.size(); j++)
        {
           ch[int(s[i])++]

        }
       
    }



    return 0;
}