#include <iostream>
#include <string>
using namespace std;

string removeVowels(string s)
{
    string result = "";
    
    for(int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if(c != 'a' && c != 'e' && c != 'i' && c != 'u' && c != 'o' && c != 'A' && c != 'E' && c != 'I' && c != 'U' && c != 'O')
        {
            result += c;
        }
    }
    return result;

}
int main(){

    string s;

    getline(cin, s);

    string output = removeVowels(s);

    cout << output << endl;

    return 0;
}