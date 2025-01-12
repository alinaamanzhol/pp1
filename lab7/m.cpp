#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){

    int n;
    cin >> n;

    set<string> unique;

    for(int i = 0; i < n; i++)
    {
        string surname;
        cin >> surname;
        unique.insert(surname);
    }

    cout << unique.size();

    return 0;
}