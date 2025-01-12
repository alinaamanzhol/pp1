#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin >> n;
    map<string, string> cur_to_orig;
    map<string, string> orig_to_fin;

    for(int i = 0; i < n; i++)
    {
        string old, new;
        cin >> old >> new;

        string original = old;

        if(cur_to_orig.count(old))
        {
            original = cur_to_original[old];
        }

        cur_to_orig.erase[old];
        cur_to_orig[original] = new;
        orig_to_fin[original] = new;
    }

    cout << orig_to_fin.size() << endl;

    for(map<string, string>::iterator it = orig_to_fin.begin(); it != orig_to_fin.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}