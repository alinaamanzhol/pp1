#include <iostream>
#include <string>

using namespace std;

int main(){
    string a;
    cin >> a;

    int max = int(a[0]);

    for(int i = 0; i < a.length(); i++)
    {
        if(max < int(a[i]))
        {
            max = int(a[i]);
        }
    }

    cout << char(max);






    return 0;
}
