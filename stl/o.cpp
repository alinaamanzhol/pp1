#include <iostream>
#include <string>

#include <set>

int main(){
    string s;
    cin >> s;
    
    set<char> m;

    for(int i = 0; i < s.size(); i++)
    {
        char a = s[i];

        a = tolower(a);

        m.insert(a);
    }

    cout << m.size() << endl;

    for(set<char>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout << *it << " ";

    }





    return 0; 
}