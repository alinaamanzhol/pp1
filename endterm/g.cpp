#include <iostream>
#include <cctype>
#include <algorithm>
#include <string>
using namespace std;
int main(){

    int size;
    cin >> size;

    int toSmall;
    cin >> toSmall;

    int toBig;
    cin >> toBig;

    string s;
    cin >> s;

    int cntLower = 0;
    int cntUpper = 0;

    for(int i = 0; i < s.size(); i++)
    {
        if(isupper(s[i])) cntUpper++;
        else if(islower(s[i])) cntLower++;
    }

    int sumA = 0;
    int sumB = 0;

    sumA = cntUpper * toBig;
    sumB = cntLower * toSmall;

    
    if(sumA > sumB) cout << sumB;
    else if(sumA == sumB) cout << sumA;
    else cout << sumA;

    return 0;
}