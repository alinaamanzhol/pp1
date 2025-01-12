#include <iostream>
using namespace std;
int main(){
    char l;
    cin >> l;

    if(l >= 'A' && l <= 'Z')
    {
        l = l + 32;
    }
    else if (l >= 'a' && l <= 'z')
    {
        l = l - 32;
    }
    cout << l << endl;









    return 0;
}