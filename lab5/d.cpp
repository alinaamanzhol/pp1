
#include <iostream>
using namespace std;
int main(){
    string substr, str;
    cin >> substr >> str;
    
    if(str.size() % substr.size() == 0)
    {
        string s3 = "";
        int repeatings = str.size() / substr.size();
    
    
    for(int i = 0; i < repeatings; i++)
    {
        s3 += substr;
    }
    
    if(s3 == str) cout << "YES" << endl;
    else cout << "NO";
    }
    
    else cout << "NO";


    return 0;
}