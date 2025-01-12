#include <iostream>

#include <string>

using namespace std;
int main(){
    string input;
    cin >> input;

    int UpperCnt = 0;
    int LowerCnt = 0;

    for(int i = 0; i < input.length(); i++)
    {
        if(input[i] >= 'a' && input[i] <= 'z')
        {
            LowerCnt++;
        }
        else {
            UpperCnt++;
        }
    }

    cout << LowerCnt << " " << UpperCnt;






    return 0;
}