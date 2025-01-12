#include <iostream>
#include <string>
using namespace std;

string letters(string s)
{
    string result = "";
    
    for(int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if(i % 2 == 0)
        {
            c = toupper(c);
        }
        result += c;
    }
    return result;
}

int main(){
    string s;
    cin >> s;

    cout << letters(s) << endl;




    return 0;
}