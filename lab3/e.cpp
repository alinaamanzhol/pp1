#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;


    if(n >= 1 && n <= 26)
    {
        char upper = 'A' + (n - 1);
        char lower = 'a' + (n - 1);
        cout << upper << " " << lower;
    }
    else {
        cout << "No such letter!";
    }









    return 0;
}