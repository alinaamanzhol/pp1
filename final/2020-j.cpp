#include <iostream>
#include <string>
using namespace std;
int main(){

    string a, b;
    cin >> a >> b;

    if(a.size() != b.size())
    {
        cout << "Understandable have a nice day";
        return 0;
    }

    for(int i = 0; i < a.size(); i++)
    {
        a = a.back() + a.substr(0, a.size() - 1);
        if(a == b)
        {
            cout << i + 1;
            return 0;
        }
    }

    cout << "Understandable have a nice day";
    


    return 0;
}
