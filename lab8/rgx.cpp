#include <iostream>
#include <set>
#include <string>
using namespace std;

void foo(set<char> arr)
{
    cout << arr.size() << endl;
    for(set<char>::iterator it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << " ";
    }
}

int main(){
    string s;
    cin >> s;

    set<char> arr;

    for(int i = 0; i < s.size(); i++)
    {

        arr.insert(tolower(s[i]));
    }

    foo(arr);


    return 0;
}