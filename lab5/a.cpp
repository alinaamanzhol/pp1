#include <iostream>

#include <string>

using namespace std;
int main(){
    string input;
    cin >> input;

    for(int i = 0; i < input.length(); i++)
    {
        if(input[i] >= 'a' && input[i] <= 'z')
        {
            input[i] -= 32;
        }
    }

    cout << input;






    return 0;
}