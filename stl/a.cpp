#include <iostream>
#include <set>
#include <string>
using namespace std;
int main(){

    int n;
    cin >> n;

    set< pair<string, string> > leaves;

    for(int i = 0; i < n; i++)
    {
        string name;
        string color;
        cin >> name >> color;
        leaves.insert(make_pair(name, color));

    }

    cout << leaves.size() << endl;



    return 0;
}