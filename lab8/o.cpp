#include <iostream>
#include <map>
using namespace std;
int main(){

    int n;
    cin >> n;

    map<string, string> data;

    for(int i = 0; i < n; i++)
    {
        string login, password;
        cin >> login >> password;

        data[login] = password;
    }

    int m;
    cin >> m;

    for(int i = 0; i < m; i++)
    {
        string login, password;
        cin >> login >> password;
        if(data.find(login) == data.end())
        {
            cout << "login error" << endl;
        }
        else if(data[login] != password)
        {
            cout << "password error" << endl;
        }
        else
        {
            cout << "correct password" << endl;
        }
    }

    return 0;
}