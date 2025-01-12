#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    string t;
    cin >> s >> t;

    int c1 = s.length();
    int c2 = 0;
    int c3 = t.length();
    int c4 = 0;

    if(c1 == c3)
    {


    for(int i = 0; i < s.length(); i++)
    {
        c2 += int(s[i]);

    }

    for(int i = 0; i < t.length(); i++)
    {
        c4 += int(t[i]);
    }

    if(c2 == c4)
    {
        cout << "YES";
    }
    else {
        cout << "NO";
    }



    }
    else {
        cout << "NO";
    }




    return 0;

}