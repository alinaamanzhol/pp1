#include <iostream>

using namespace std;
int main(){
    int n;
    cin >> n;

    if(n % 10 == 1 && n % 100 != 11)
    {
        cout << n << " " << "korova" << endl;
    } else if(n % 10 >= 2 && n % 10 <= 4 && (n % 100 < 12 || n % 100 > 14))
    {
        cout << n << " " << "korovy" << endl;
    } else{
        cout << n << " " << "korov" << endl;
    }





    return 0;
}