#include <iostream>
#include <map>
#include <set>
using namespace std;
int main(){

    int n;
    cin >> n;

    string s;
    int num;

    map<string, int> dorama;

    for(int i = 0; i < n; i++)
    {
        cin >> s >> num;
        dorama[s] += num;

    }

    for(map<string, int>::iterator it = dorama.begin(); it != dorama.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }



    return 0;
}