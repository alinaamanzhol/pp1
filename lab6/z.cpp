#include <iostream>

using namespace std;

strToBool(string str)
{
    for(int i = 0; i < str.length(); i++)
    {
        if(str == "0")
        {
            return "false";
        }
        else if(str == "1")
        {
            return "true";
        } else{
            return str;
        }
    }
}

int main(){
    string str;
    cin >> str;

    cout << strToBool(str) << endl;


    return 0;
}