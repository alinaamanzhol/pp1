#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore();

    set<char> commonChars;

    string str;
    getline(cin, str);

    for(char c : str)
    {
        commonChars.insert(c);
    }

    for(int i = 1; i < n; i++)
    {
        getline(cin, str);
        set<char> current(str.begin(), str.end());

        for(set<char>::iterator it = commonChars.begin(); it != commonChars.end())
        {
            if(current.find(*it) == current.end())
            {
                it = commonChars.erase(it);
            }
            else ++it;
        }
    }

    if(commonChars.empty()) 
    {
        cout << "NO COMMON CHARACTERS";
    }
    else 
    {
        for(set<char>::iterator = commonChars.begin(); it != commonChars.end(); it1++) cout << *it1 << " ";
    }



    return 0;
}