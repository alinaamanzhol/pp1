#include <iostream>
#include <string>
using namespace std;

string convert(string word)
{
    string result = "";
    for(int i = 0; i < word.size(); i++)
    {
        char symbol = tolower(word[i]);
        if(symbol == 'p') result += 'b';
        else if(symbol == 'e') result += 'i';
        else result += symbol;
    }
    return result;
}
int main(){

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        string word1, word2;
        cin >> word1 >> word2;

        if(convert(word1) == convert(word2)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }


    return 0;
}