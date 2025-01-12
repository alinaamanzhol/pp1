#include <iostream>
using namespace std;

int main(){
    string  input, result;

    cin >> input;

    for(int i = 0; i < input.size(); i++)
    {
        char ch = input[i];

        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            result += ch;
        }
    }

    cout << result << endl;


    






    return 0;
}