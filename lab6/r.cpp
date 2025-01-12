#include <iostream>
#include <cctype>
using namespace std;
char upper(char c)
{
    return toupper(c);

}

int main(){
    char c;
    cin >> c;


    cout << upper(c) << endl;
    return 0;
}