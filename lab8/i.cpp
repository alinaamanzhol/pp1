#include <iostream>
#include <set>
using namespace std;
int main(){

    int n;
    cin >> n;

    set<string> ss;

    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if(ss.find(s) == ss.end())
        {
            cout << "new user added" << endl;
            ss.insert(s);
        }
        else cout << "user already exists" << endl;
    }



    return 0;
}